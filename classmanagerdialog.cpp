#include "classmanagerdialog.h"
#include "ui_classmanagerdialog.h"

ClassManagerDialog::ClassManagerDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClassManagerDialog)
{
    ui->setupUi(this);
}

ClassManagerDialog::~ClassManagerDialog()
{
    delete ui;
}

QString ClassManagerDialog::ClassNumber()
{
    return ui->EditNumber->text();
}

QString ClassManagerDialog::ClassName()
{
    return ui->EditName->text();
}

int ClassManagerDialog::ClassTime()
{
    return ui->EditTime->text().toInt();
}

QString ClassManagerDialog::ClassSite()
{
    return ui->EditSite->text();
}

QString ClassManagerDialog::ClassTech()
{
    return ui->EditTech->text();
}

float ClassManagerDialog::ClassScore()
{
    return ui->EditScore->text().toFloat();
}

QString ClassManagerDialog::ClassPhase()
{
    return ui->EditPhase->text();
}


