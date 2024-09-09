#include "teacher.h"

Teacher::Teacher()
{
    m_error = 0;
    m_name = "未知";
    m_number = 0;
    m_sex = "未知";
    m_birthDate = QDate(2000, 1, 1);
    m_profession = "未知";
    m_education = "未知";
    m_wage = 0;
    m_marriage = "未知";
}

Teacher::Teacher(int error)
{
    m_error = error;
}

