#ifndef TEACHER_H
#define TEACHER_H

#include "classcollection.h"

#include <QString>
#include <QDate>

class Teacher
{

public:
    Teacher();
    Teacher(int error);

public:
    int m_error; //合法性

    int m_number;
    QString m_name;
    QString m_sex; // 0未知 1男性 2女性
    QDate m_birthDate;
    QString m_profession;
    QString m_education;
    double m_wage;
    QString m_marriage;
    ClassCollection m_class;
};

#endif // TEACHER_H
