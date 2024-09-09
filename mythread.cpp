#include "mythread.h"

#include <QDebug>

FilterThread::FilterThread(QObject *parent)
    : QThread{parent}
{
    ResetFilter();

}

void FilterThread::recTeacherList(QList<Teacher> list)
{
    m_TeacherList = list;
    qDebug() << "Filter线程接收到主线程的数据！";
}

void FilterThread::ResetFilter()
{
    m_status_profession = "无要求";
    m_status_education = "无要求";
    m_status_sex = "无要求";
    m_status_marriage = "无要求";
    m_status_StartDate = QDate(1949, 10, 1);
    m_status_EndDate = QDate(2024, 12, 31);
}

void FilterThread::run()
{
    qDebug() << "Filter线程开始处理数据！";

    // 处理索引
    for(int i = 0; i < m_TeacherList.size(); i++)
    {
        m_FilterList.append(i);
    }

    // 过滤职称
    for(int i = m_TeacherList.size() - 1; i >= 0; i--)
    {
        if(m_status_profession == "无要求") break;
        if(m_TeacherList.at(i).m_profession != m_status_profession)
        {
            m_TeacherList.removeAt(i);
            m_FilterList.removeAt(i);
        }
    }

    // 过滤学历
    for(int i = m_TeacherList.size() - 1; i >= 0; i--)
    {
        if(m_status_education == "无要求") break;
        if(m_TeacherList.at(i).m_education != m_status_education)
        {
            m_TeacherList.removeAt(i);
            m_FilterList.removeAt(i);
        }
    }

    // 过滤性别
    for(int i = m_TeacherList.size() - 1; i >= 0; i--)
    {
        if(m_status_sex == "无要求") break;
        if(m_TeacherList.at(i).m_sex != m_status_sex)
        {
            m_TeacherList.removeAt(i);
            m_FilterList.removeAt(i);
        }
    }

    // 过滤婚姻
    for(int i = m_TeacherList.size() - 1; i >= 0; i--)
    {
        if(m_status_marriage == "无要求") break;
        if(m_TeacherList.at(i).m_marriage != m_status_marriage)
        {
            m_TeacherList.removeAt(i);
            m_FilterList.removeAt(i);
        }
    }

    // 过滤日期
    for(int i = m_TeacherList.size() - 1; i >= 0; i--)
    {
        if(m_TeacherList.at(i).m_birthDate < m_status_StartDate || m_TeacherList.at(i).m_birthDate > m_status_EndDate)
        {
            m_TeacherList.removeAt(i);
            m_FilterList.removeAt(i);
        }
    }

    // 发送数据给主线程
    emit sendList(m_FilterList);

    qDebug() << "Filter线程发送数据给主线程！";
}
