#ifndef DELETETEACHERDIALOG_H
#define DELETETEACHERDIALOG_H

#include "teacher.h"

#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class DeleteTeacherDialog;
}

class DeleteTeacherDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteTeacherDialog(QWidget *parent = nullptr);
    ~DeleteTeacherDialog();

    void ShowSingleList(Teacher teacher);

    void ShowList(QList<Teacher> list, QList<int> row);

private:
    Ui::DeleteTeacherDialog *ui;


    QStandardItemModel model;
};

#endif // DELETETEACHERDIALOG_H
