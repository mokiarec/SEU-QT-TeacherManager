#include "logdialog.h"
#include "ui_logdialog.h"

LogDialog::LogDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LogDialog)
{
    ui->setupUi(this);
}

LogDialog::~LogDialog()
{
    delete ui;
}

QString LogDialog::User()
{
    return ui->UserEdit->text();
}

QString LogDialog::Password()
{
    return ui->PasswordEdit->text();
}
