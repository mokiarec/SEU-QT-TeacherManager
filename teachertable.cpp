#include "teachertable.h"

TeacherTable::TeacherTable() {}

void TeacherTable::AddTeacher(Teacher teacher)
{
    this->Value.append(teacher);
}
