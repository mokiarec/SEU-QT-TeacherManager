#ifndef ADDTEACHERDIALOG_H
#define ADDTEACHERDIALOG_H

#include <QDialog>
#include <QDebug>

#include "classcollection.h"
#include "classmanagerdialog.h"
#include "classcollection.h"

namespace Ui {
class AddTeacherDialog;
}

class AddTeacherDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddTeacherDialog(QWidget *parent = nullptr);
    ~AddTeacherDialog();

    // 从用户窗口获取属性
    int Number();
    QString Name();
    QString sex();
    QDate Date();
    QString Profession();
    QString Education();
    double Wage();
    QString Marriage();
    ClassCollection& Collection();

private slots:
    void on_ClassShowButton_clicked();

private:
    Ui::AddTeacherDialog *ui;

    ClassCollection m_collection;
};

#endif // ADDTEACHERDIALOG_H
