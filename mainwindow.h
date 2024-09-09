#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "teachertable.h"
#include "Account.h"

#include <QMainWindow>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void ShowSignupTable();

    void WriteJson();
    void ReadJson();

signals:

    // 向过滤器子线程发送数据
    void Starting(QList<Teacher>);

private slots:
    void on_AddTeacherButton_clicked();

    void on_DeleteTeacherButton_clicked();

    void on_TableViewClicked(const QModelIndex& index);

    void on_ClearButton_clicked();

    void on_pushButton_clicked();

    void on_ManagerButton_clicked();

    void on_FilterButton_clicked();

    void on_RandomButton_clicked();

private:
    Ui::MainWindow *ui;

    TeacherTable m_InfoTable;

    Account m_account;

    QStandardItemModel* m_TeacherModel;
    QStandardItemModel* m_ClassModel;

    bool RandomGenerate();
};
#endif // MAINWINDOW_H
