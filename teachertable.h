#ifndef TEACHERTABLE_H
#define TEACHERTABLE_H

#include "teacher.h"

#include <QList>

class TeacherTable
{
public:
    TeacherTable();

    // 管理函数
    void AddTeacher(Teacher teacher);

    void DeleteTeacher();

public:
    QList<Teacher> Value;

};

#endif // TEACHERTABLE_H
