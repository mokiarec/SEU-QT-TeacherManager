#include "searchdialog.h"
#include "ui_searchdialog.h"

#include <QDebug>

Teacher g_EmptyTeacher(-1); // 全局 空老师

SearchDialog::SearchDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

const Teacher& SearchDialog::Search_Name(QString index, TeacherTable &table)
{
    qDebug() << "搜索前有" << table.Value.size() << "个教师";
    for(int i = 0; i < table.Value.size(); i++)
        if(table.Value.at(i).m_name == index)
        {
            qDebug() << "查询到目标姓名";
            return table.Value.at(i);
        }
    return g_EmptyTeacher;
}

const Teacher& SearchDialog::Search_Number(QString index, TeacherTable &table)
{
    qDebug() << "搜索前有" << table.Value.size() << "个教师";
    for(int i = 0; i < table.Value.size(); i++)
        if(QString::number(table.Value.at(i).m_number) == index)
        {
            qDebug() << "查询到目标编号";
            return table.Value.at(i);
        }
    return g_EmptyTeacher;
}

void SearchDialog::ShowTeacher(const Teacher &teacher)
{
    qDebug() << "进入展示教师函数";

    model.appendRow(new QStandardItem("编号：" + QString::number(teacher.m_number)));
    model.appendRow(new QStandardItem("姓名：" + teacher.m_name));
    model.appendRow(new QStandardItem("性别：" + teacher.m_sex));
    model.appendRow(new QStandardItem("出生日期：" + teacher.m_birthDate.toString("yyyy-MM-dd")));
    model.appendRow(new QStandardItem("职称：" + teacher.m_profession));
    model.appendRow(new QStandardItem("最高学历：" + teacher.m_education));
    model.appendRow(new QStandardItem("工资：" + QString::number(teacher.m_wage)));
    model.appendRow(new QStandardItem("婚否：" + teacher.m_marriage));

    // 设置视图模式 为 列表模式
    ui->listView->setViewMode(QListView::ListMode);

    ui->listView->setModel(&model);

    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->listView->show();

    qDebug() << "展示教师成功！";
}

void SearchDialog::ShowEmpty()
{
    model.appendRow(new QStandardItem("查询为空！"));

    ui->listView->setViewMode(QListView::ListMode);

    ui->listView->setModel(&model);

    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->listView->show();

}

void SearchDialog::on_StopButton_clicked()
{
    this->close();
}


void SearchDialog::on_BeginButton_clicked()
{
    model.clear();
    if(ui->comboBox->currentText() == "编号")
    {
        qDebug() << "发送查询编号信号";
        emit clicked_Number(ui->lineEdit->text());
    }
    if(ui->comboBox->currentText() == "姓名")
    {
        qDebug() << "发送查询姓名信号";
        emit clicked_Name(ui->lineEdit->text());
    }
}

