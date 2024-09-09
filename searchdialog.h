#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include "teachertable.h"
#include "teacher.h"

#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = nullptr);
    ~SearchDialog();

    const Teacher& Search_Name(QString index, TeacherTable &table);
    const Teacher& Search_Number(QString index, TeacherTable &table);

    void ShowTeacher(const Teacher &teacher);
    void ShowEmpty();

private slots:
    void on_StopButton_clicked();

    void on_BeginButton_clicked();

signals:
    void clicked_Name(QString);
    void clicked_Number(QString);

private:
    Ui::SearchDialog *ui;

    QStandardItemModel model;
};

#endif // SEARCHDIALOG_H
