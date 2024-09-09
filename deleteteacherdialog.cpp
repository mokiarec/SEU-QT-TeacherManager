#include "deleteteacherdialog.h"
#include "ui_deleteteacherdialog.h"

#include <QDebug>

DeleteTeacherDialog::DeleteTeacherDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteTeacherDialog)
{
    ui->setupUi(this);
}

DeleteTeacherDialog::~DeleteTeacherDialog()
{
    delete ui;
}


void DeleteTeacherDialog::ShowSingleList(Teacher teacher)
{
    qDebug() << "进入ShowList函数";

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

    // 设置数据模型
    ui->listView->setModel(&model);

    // 设置不可修改
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // 显示视图
    ui->listView->show();
}

void DeleteTeacherDialog::ShowList(QList<Teacher> list, QList<int> row)
{
    for(int i = 0; i < row.count(); i++)
    {
        Teacher temp = list.at(row.at(i));
        model.appendRow(new QStandardItem("编号：" + QString::number(temp.m_number) + "    姓名：" + temp.m_name));

        // 设置数据模型
        ui->listView->setModel(&model);

        // 显示视图
        ui->listView->show();
    }
}
