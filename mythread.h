#ifndef MYTHREAD_H
#define MYTHREAD_H

#include "teacher.h"

#include <QObject>
#include <QThread>

// 过滤特定要求的数据
class FilterThread : public QThread
{
    Q_OBJECT
public:
    explicit FilterThread(QObject *parent = nullptr);

    void recTeacherList(QList<Teacher> list);

    void ResetFilter();

protected:
    void run() override;

signals:
    void sendList(QList<int> list);

public:
    QList<Teacher> m_TeacherList; // 接收主线程发送的数据
    QList<int> m_FilterList;

    // 过滤器选项状态
    QString m_status_profession;
    QString m_status_education;
    QString m_status_sex;
    QString m_status_marriage;

    QDate m_status_StartDate;
    QDate m_status_EndDate;

};

#endif // MYTHREAD_H
