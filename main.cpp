#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 注册 QList<int> 以便在信号和槽中使用
    qRegisterMetaType<QList<int>>("QList<int>");

    MainWindow w;
    w.show();
    return a.exec();
}

/*
    TeacherTable类

    Teacher类

    ClassCollection类

    AddTeacher 窗口

    DeleteTeacher 窗口

    ClassManager 窗口

    ShowTable 函数

    ShowClass 函数
*/
