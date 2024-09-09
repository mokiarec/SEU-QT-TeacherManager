#include "addteacherdialog.h"
#include "ui_addteacherdialog.h"

AddTeacherDialog::AddTeacherDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddTeacherDialog)
{
    ui->setupUi(this);
}

AddTeacherDialog::~AddTeacherDialog()
{
    delete ui;
}

int AddTeacherDialog::Number()
{
    int number;
    number = ui->EditNumber->text().toInt();
    return number;
}

QString AddTeacherDialog::Name()
{
    QString name;
    name = ui->EditName->text();
    return name;
}

QString AddTeacherDialog::sex()
{
    if(ui->ButtonMale->isChecked())
        return "男";
    if(ui->ButtonFemale->isChecked())
        return "女";
    return "未知";
}

QDate AddTeacherDialog::Date()
{
    QDate date;
    date = ui->BirthdateEdit->date();
    return date;
}

QString AddTeacherDialog::Profession()
{
    QString profession;
    profession = ui->ProfessionBox->currentText();
    return profession;
}

QString AddTeacherDialog::Education()
{
    QString education;
    education = ui->EducationBox->currentText();
    return education;
}

double AddTeacherDialog::Wage()
{
    return ui->EditWage->text().toFloat();
}

QString AddTeacherDialog::Marriage()
{
    if(ui->YesButton->isChecked())
        return "已婚";
    if(ui->NoButton->isChecked())
        return "未婚";
    else return "未知";
}

ClassCollection& AddTeacherDialog::Collection()
{
    return m_collection;
}

void AddTeacherDialog::on_ClassShowButton_clicked()
{
    ClassManagerDialog classdlg(this);
    int ret = classdlg.exec();
    if(ret == QDialog::Accepted)
    {
        ClassCollection temp;
        temp.m_classNumber = classdlg.ClassNumber();
        temp.m_className = classdlg.ClassName();
        temp.m_classTime = classdlg.ClassTime();
        temp.m_classSite = classdlg.ClassSite();
        temp.m_classTech = classdlg.ClassTech();
        temp.m_classScore = classdlg.ClassScore();
        temp.m_classPhase = classdlg.ClassPhase();

        m_collection = temp;
        qDebug() << "成功添加教师信息表！";

    }
}

