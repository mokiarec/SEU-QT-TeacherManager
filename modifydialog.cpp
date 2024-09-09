#include "modifydialog.h"
#include "ui_modifydialog.h"

ModifyDialog::ModifyDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ModifyDialog)
{
    ui->setupUi(this);
}

ModifyDialog::~ModifyDialog()
{
    delete ui;
}

void ModifyDialog::ShowInfo(ClassCollection t)
{
    ui->EditNumber->setText(t.m_classNumber);
    ui->EditName->setText(t.m_className);
    ui->EditTime->setText(QString::number(t.m_classTime));
    ui->EditTech->setText(t.m_classTech);
    ui->EditSite->setText(t.m_classSite);
    ui->EditScore->setText(QString::number(t.m_classScore));
    ui->EditPhase->setText(t.m_classPhase);
}

QString ModifyDialog::ClassNumber()
{
    return ui->EditNumber->text();
}

QString ModifyDialog::ClassName()
{
    return ui->EditName->text();
}

int ModifyDialog::ClassTime()
{
    return ui->EditTime->text().toInt();
}

QString ModifyDialog::ClassSite()
{
    return ui->EditSite->text();
}

QString ModifyDialog::ClassTech()
{
    return ui->EditTech->text();
}

double ModifyDialog::ClassScore()
{
    return ui->EditScore->text().toFloat();
}

QString ModifyDialog::ClassPhase()
{
    return ui->EditPhase->text();
}


