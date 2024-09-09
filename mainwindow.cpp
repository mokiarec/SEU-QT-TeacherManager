#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "addteacherdialog.h"
#include "deleteteacherdialog.h"
#include "searchdialog.h"
#include "modifydialog.h"
#include "mythread.h"
#include "logdialog.h"

#include <QDebug>
#include <QMessageBox>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonValue>
#include <QFile>
#include <QRandomGenerator>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 登录
    LogDialog* logdlg = new LogDialog;
    int ret = logdlg->exec();
    if(ret == QDialog::Accepted)
    {
        QString projectDir = QCoreApplication::applicationDirPath();
        projectDir = projectDir.left(projectDir.lastIndexOf("build"));
        QDir::setCurrent(projectDir);

        // 读入磁盘文件
        QString filePath = "LogIn/log.json";

        QFile file(filePath);

        if(file.open(QFile::ReadOnly))
        {
            QByteArray all = file.readAll();
            file.close();

            QJsonDocument doc = QJsonDocument::fromJson(all);
            if(doc.isObject())
            {
                m_account.User = doc["User"].toString();
                m_account.Password = doc["Password"].toString();
            }
            else exit(0);
            if(m_account.User != logdlg->User() || m_account.Password != logdlg->Password())
            {
                QMessageBox::warning(this, "错误", "用户或密码错误！");
                exit(0);
            }
        }

    }
    else if(ret == QDialog::Rejected)
    {
        exit(0);
    }

    // 初始化
    m_TeacherModel = new QStandardItemModel;
    m_ClassModel = new QStandardItemModel;

    // 控件默认参数
    ui->TeacherView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // 读入磁盘文件
    ReadJson();

    // 展示数据
    ShowSignupTable();

    // 关联授课表的信号槽
    connect(ui->TeacherView, &QTableView::clicked, this, &MainWindow::on_TableViewClicked);

    qDebug() << "MainWindow构造函数结束！";
}

MainWindow::~MainWindow()
{
    // 写入磁盘文件
    WriteJson();

    delete ui;
    delete m_TeacherModel;
    delete m_ClassModel;
}

void MainWindow::on_AddTeacherButton_clicked()
{
    AddTeacherDialog addteacherdlg(this);
    int ret = addteacherdlg.exec();
    if(ret == QDialog::Accepted)
    {
        Teacher temp;
        temp.m_number = addteacherdlg.Number();
        temp.m_name = addteacherdlg.Name();
        temp.m_sex = addteacherdlg.sex();
        temp.m_birthDate = addteacherdlg.Date();
        temp.m_profession = addteacherdlg.Profession();
        temp.m_education = addteacherdlg.Education();
        temp.m_wage = addteacherdlg.Wage();
        temp.m_marriage = addteacherdlg.Marriage();
        temp.m_class = addteacherdlg.Collection();

        qDebug() << "mainwindow接收到classmanager发送的classcollection信息";


        m_InfoTable.AddTeacher(temp);

        qDebug() << "成功添加教师！";

        // 展示表格
        ShowSignupTable();
    }
}


void MainWindow::on_DeleteTeacherButton_clicked()
{
    DeleteTeacherDialog deleteteacherdlg(this);

    // 获取当前索引
    QItemSelectionModel *selectionModel = ui->TeacherView->selectionModel();
    QModelIndexList selectedIndexes = selectionModel->selectedIndexes();

    // 检查是否有选中的行
    if (selectionModel->hasSelection())
    {
        // 收集行号
        QList<int> rowsToDelete;
        for(int i = 0; i < selectedIndexes.count(); i++)
        {
            if (selectedIndexes.at(i).isValid() && selectedIndexes.at(i).row() >= 0)
            {
                rowsToDelete.append(selectedIndexes.at(i).row());
            }
        }

        // 对行号进行从大到小的排序
        std::sort(rowsToDelete.begin(), rowsToDelete.end());

        // 显示信息列表
        if(selectedIndexes.count() == 1)
            deleteteacherdlg.ShowSingleList(m_InfoTable.Value.at(selectedIndexes.at(0).row()));
        else deleteteacherdlg.ShowList(m_InfoTable.Value, rowsToDelete);

        qDebug() << "当前选中的行" << selectedIndexes.at(0).row();
        qDebug() << "当前选中的行数" << selectedIndexes.count();

        int ret = deleteteacherdlg.exec();

        if(ret == QDialog::Accepted)
        {
            // 逆序删除行
            for(int i = selectedIndexes.count() - 1; i >= 0; i--)
            {
                int index = rowsToDelete.at(i);
                m_InfoTable.Value.removeAt(index);
                qDebug() << "行数据已删除！";
                m_TeacherModel->removeRow(index);
            }

            m_ClassModel->clear();
            ui->TeacherView->update();
            ui->ClassView->update();
        }
    }
    else
    {
        QMessageBox::information(this, "警告", "未选中教师！");
        qErrnoWarning("未选中教师！");
    }
}

void MainWindow::on_TableViewClicked(const QModelIndex &index)
{
    m_ClassModel->clear();

    int row = index.row();

    m_ClassModel->appendRow(new QStandardItem("课程编号：" + m_InfoTable.Value.at(row).m_class.m_classNumber));
    m_ClassModel->appendRow(new QStandardItem("课程名称：" + m_InfoTable.Value.at(row).m_class.m_className));
    m_ClassModel->appendRow(new QStandardItem("课时：" + QString::number(m_InfoTable.Value.at(row).m_class.m_classTime) + "时"));
    m_ClassModel->appendRow(new QStandardItem("教室：" + m_InfoTable.Value.at(row).m_class.m_classSite));
    m_ClassModel->appendRow(new QStandardItem("授课班级：" + m_InfoTable.Value.at(row).m_class.m_classTech));
    m_ClassModel->appendRow(new QStandardItem("学分：" + QString::number(m_InfoTable.Value.at(row).m_class.m_classScore)));
    m_ClassModel->appendRow(new QStandardItem("学期：" + m_InfoTable.Value.at(row).m_class.m_classPhase));


    ui->ClassView->setModel(m_ClassModel);
    ui->ClassView->setViewMode(QListView::ListMode);
    ui->ClassView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->ClassView->show();
}

void MainWindow::ShowSignupTable()
{

    // 1、创建子线程
    FilterThread *filter = new FilterThread;

    // 2、启动子线程
    // 过滤器初始化
    filter->m_status_profession = ui->Choose_Profession->currentText();
    filter->m_status_education = ui->Choose_Education->currentText();

    if(ui->Choose_Male->isChecked())
        filter->m_status_sex = "男";
    else if(ui->Choose_Female->isChecked())
        filter->m_status_sex = "女";
    else filter->m_status_sex = "无要求";

    if(ui->Choose_Yes->isChecked())
        filter->m_status_marriage = "已婚";
    else if(ui->Choose_No->isChecked())
        filter->m_status_marriage = "未婚";
    else filter->m_status_marriage = "无要求";

    filter->m_status_StartDate = ui->StartDate->date();
    filter->m_status_EndDate = ui->EndDate->date();

    // 发送数据
    connect(this, &MainWindow::Starting, filter, &FilterThread::recTeacherList);

    emit Starting(this->m_InfoTable.Value);

    filter->start();
    qDebug() << "启动Filter线程！";

    // 接收数据
    connect(filter, &FilterThread::sendList, this, [=](QList<int> Show_list_index){
        qDebug() << "主线程接收到Filter线程的数据！";

        // 初始化
        m_TeacherModel->clear();

        // 设置题头
        m_TeacherModel->setHorizontalHeaderLabels(QStringList() <<
                                         "编号" << "姓名" << "性别" << "生日" << "职称" << "最高学历" << "工资" << "婚否");
        // 填充数据
        if(Show_list_index.size())
        {
            for(int j = 0; j < Show_list_index.size(); j++)
            {
                int i = Show_list_index.at(j); // 按照Show_list存储的编号进行显示

                QList<QStandardItem*> list;
                list.append(new QStandardItem(QString::number(m_InfoTable.Value.at(i).m_number)));
                list.append(new QStandardItem(m_InfoTable.Value.at(i).m_name));
                list.append(new QStandardItem(m_InfoTable.Value.at(i).m_sex));
                list.append(new QStandardItem(m_InfoTable.Value.at(i).m_birthDate.toString("yyyy-MM-dd")));
                list.append(new QStandardItem(m_InfoTable.Value.at(i).m_profession));
                list.append(new QStandardItem(m_InfoTable.Value.at(i).m_education));
                list.append(new QStandardItem(QString::number(m_InfoTable.Value.at(i).m_wage)));
                list.append(new QStandardItem(m_InfoTable.Value.at(i).m_marriage));

                m_TeacherModel->appendRow(list);
            }
        }

        ui->TeacherView->setModel(m_TeacherModel);

        ui->TeacherView->show();

    });
}

void MainWindow::WriteJson()
{
    // 写入teacher类
    QJsonArray array;

    for(int i = 0; i < m_InfoTable.Value.size(); i++)
    {
        QJsonObject obj;
        obj.insert("Number", m_InfoTable.Value.at(i).m_number);
        obj.insert("Name", m_InfoTable.Value.at(i).m_name);
        obj.insert("Sex", m_InfoTable.Value.at(i).m_sex);
        obj.insert("BirthDate", m_InfoTable.Value.at(i).m_birthDate.toString());
        obj.insert("Profession", m_InfoTable.Value.at(i).m_profession);
        obj.insert("Education", m_InfoTable.Value.at(i).m_education);
        obj.insert("Wage", m_InfoTable.Value.at(i).m_wage);
        obj.insert("Marriage", m_InfoTable.Value.at(i).m_marriage);

        QJsonObject subObj;
        subObj.insert("ClassNumber", m_InfoTable.Value.at(i).m_class.m_classNumber);
        subObj.insert("ClassName", m_InfoTable.Value.at(i).m_class.m_className);
        subObj.insert("ClassTime", m_InfoTable.Value.at(i).m_class.m_classTime);
        subObj.insert("ClassSite", m_InfoTable.Value.at(i).m_class.m_classSite);
        subObj.insert("ClassTech", m_InfoTable.Value.at(i).m_class.m_classTech);
        subObj.insert("ClassScore", m_InfoTable.Value.at(i).m_class.m_classScore);
        subObj.insert("ClassPhase", m_InfoTable.Value.at(i).m_class.m_classPhase);

        obj.insert("ClassCollection", subObj);

        // JSon对象加入到Json数组
        array.append(obj);

    }

    QJsonDocument doc(array);
    QByteArray json = doc.toJson();

    // 写入磁盘文件
    QString filePath = "data/Info.json";

    QFile file(filePath);

    if(file.open(QFile::WriteOnly))
    {
        file.write(json);
        file.close();

        qDebug() << "写入成功！" << "写入" << m_InfoTable.Value.size() << "个数据。";
    }
}

void MainWindow::ReadJson()
{
    QString projectDir = QCoreApplication::applicationDirPath();
    projectDir = projectDir.left(projectDir.lastIndexOf("build"));
    QDir::setCurrent(projectDir);

    // 读入磁盘文件
    QString filePath = "data/Info.json";

    QFile file(filePath);

    if(file.open(QFile::ReadOnly))
    {
        QByteArray all = file.readAll();
        file.close();

        // 读入teacher类
        QJsonDocument doc = QJsonDocument::fromJson(all);
        if(doc.isArray())
        {
            QJsonArray array = doc.array();
            for(int i = 0; i < array.size(); i++)
            {
                Teacher temp;

                QJsonObject obj = array.at(i).toObject();
                temp.m_number = obj["Number"].toInt();
                temp.m_name = obj["Name"].toString();
                temp.m_sex = obj["Sex"].toString();
                temp.m_birthDate = QDate::fromString(obj["BirthDate"].toString());
                temp.m_profession = obj["Profession"].toString();
                temp.m_education = obj["Education"].toString();
                temp.m_wage = obj["Wage"].toDouble();
                temp.m_marriage = obj["Marriage"].toString();

                QJsonObject subObj = obj["ClassCollection"].toObject();
                temp.m_class.m_classNumber = subObj["ClassNumber"].toString();
                temp.m_class.m_className = subObj["ClassName"].toString();
                temp.m_class.m_classTime = subObj["ClassTime"].toInt();
                temp.m_class.m_classSite = subObj["ClassSite"].toString();
                temp.m_class.m_classTech = subObj["ClassTech"].toString();
                temp.m_class.m_classScore = subObj["ClassScore"].toDouble();
                temp.m_class.m_classPhase = subObj["ClassPhase"].toString();

                this->m_InfoTable.Value.append(temp);
            }
        }

        qDebug() << "读入成功！" << "读入" << m_InfoTable.Value.size() << "个数据。";
    }
}



void MainWindow::on_ClearButton_clicked()
{
    int ret = QMessageBox::question(this, "一键删除", "你是否要彻底删除？", QMessageBox::Yes | QMessageBox::No);
    if(ret == QMessageBox::Yes)
    {
        m_TeacherModel->clear();
        m_ClassModel->clear();
        m_InfoTable.Value.clear();
        ui->TeacherView->update();
        ui->ClassView->update();

        qDebug() << "已清空，m_InfoTable大小为：" << m_InfoTable.Value.size();
    }
}


void MainWindow::on_pushButton_clicked()
{
    SearchDialog *searchdlg = new SearchDialog;
    searchdlg->show();
    // 关联信号槽
    connect(searchdlg, &SearchDialog::clicked_Name, this,[=](QString str)
    {
        const Teacher& temp = searchdlg->Search_Name(str, m_InfoTable);
        qDebug() << "返回的教师error值：" << temp.m_error;
        if(temp.m_error != -1)
            searchdlg->ShowTeacher(temp);
        else searchdlg->ShowEmpty();
    });
    connect(searchdlg, &SearchDialog::clicked_Number, this,[=](QString str)
    {
        const Teacher& temp = searchdlg->Search_Number(str, m_InfoTable);
        qDebug() << "返回的教师error值：" << temp.m_error;
        if(temp.m_error != -1)
            searchdlg->ShowTeacher(temp);
        else searchdlg->ShowEmpty();
    });
}


void MainWindow::on_ManagerButton_clicked()
{
    ModifyDialog* modifydlg = new ModifyDialog;

    // 获取当前索引
    QItemSelectionModel *selectionModel = ui->TeacherView->selectionModel();
    QModelIndexList selectedIndexes = selectionModel->selectedIndexes();

    // 检查是否有选中的行
    if (selectionModel->hasSelection())
    {
        modifydlg->ShowInfo(m_InfoTable.Value.at(selectedIndexes.at(0).row()).m_class);

        int ret = modifydlg->exec();
        if(ret == QDialog::Accepted)
        {
            Teacher p = m_InfoTable.Value.at(selectedIndexes.at(0).row());
            p.m_class.m_className = modifydlg->ClassName();
            p.m_class.m_classNumber = modifydlg->ClassNumber();
            p.m_class.m_classTime = modifydlg->ClassTime();
            p.m_class.m_classTech = modifydlg->ClassTech();
            p.m_class.m_classSite = modifydlg->ClassSite();
            p.m_class.m_classScore = modifydlg->ClassScore();
            p.m_class.m_classPhase = modifydlg->ClassPhase();

            this->m_InfoTable.Value.replace(selectedIndexes.at(0).row(), p);
            qDebug() << "修改授课表成功！";

            connect(modifydlg, &ModifyDialog::Modify_success, this, &MainWindow::on_TableViewClicked);
            emit modifydlg->Modify_success(selectedIndexes.at(0));
        }
    }
    else
    {
        QMessageBox::information(this, "警告", "未选中教师！");
        qErrnoWarning("未选中教师！");
    }

    qDebug() << "退出修改对话框！";

}

void MainWindow::on_FilterButton_clicked()
{
    ShowSignupTable();
}

bool MainWindow::RandomGenerate()
{
    Teacher temp;

    // 随机Number
    int randomInt = QRandomGenerator::global()->bounded(100000);
    for(int i = 0; i < m_InfoTable.Value.size(); i++)
    {
        if(m_InfoTable.Value.at(i).m_number == randomInt) return false;
    }
    temp.m_number = randomInt;

    // 随机Name
    const QLatin1String alphabet("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    QString randomString;
    for (int i = 0; i < 3; ++i) {
        // 生成一个随机索引
        int randomIndex = QRandomGenerator::global()->bounded(26);
        // 将索引转换为字母并添加到字符串
        randomString.append(alphabet.at(randomIndex));
    }
    temp.m_name = randomString;

    // 随机sex
    randomInt = QRandomGenerator::global()->bounded(2);
    if(randomInt == 0) temp.m_sex = "男";
    else temp.m_sex = "女";

    // 随机BirthDate
    // 计算总天数
    QDate start(1949, 10, 1);
    QDate end(2024, 12, 31);
    qint64 totalDays = start.daysTo(end) + 1;
    // 生成一个随机天数
    qint64 randomDays = QRandomGenerator::global()->bounded(int(totalDays));
    QDate randomDate  = start.addDays(randomDays);
    temp.m_birthDate = randomDate;

    // 随机Proffesion
    // 生成一个随机索引
    int randomIndex1 = QRandomGenerator::global()->bounded(1, ui->Choose_Profession->count());
    // 获取随机选中的项目
    QString randomProfess = ui->Choose_Profession->itemText(randomIndex1);
    temp.m_profession = randomProfess;

    // 随机Education
    // 生成一个随机索引
    int randomIndex2 = QRandomGenerator::global()->bounded(1, ui->Choose_Education->count());
    // 获取随机选中的项目
    QString randomEducate = ui->Choose_Education->itemText(randomIndex2);
    temp.m_education = randomEducate;

    // 随机Wage
    float randomWage = QRandomGenerator::global()->bounded(1000, 20000);
    temp.m_wage = randomWage;

    // 随机Marriage
    randomInt = QRandomGenerator::global()->bounded(2);
    if(randomInt == 0) temp.m_marriage = "已婚";
    else temp.m_marriage = "未婚";

    // 插入
    m_InfoTable.Value.append(temp);

    return true;
}


void MainWindow::on_RandomButton_clicked()
{
    if(ui->randomEdit->text().isEmpty() || ui->randomEdit->text().trimmed().isEmpty()) return;

    int ret = ui->randomEdit->text().toInt();
    for(int i = 0; i < ret; i++)
        if(!RandomGenerate()) i--;

    ShowSignupTable();
}

