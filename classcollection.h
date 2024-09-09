#ifndef CLASSCOLLECTION_H
#define CLASSCOLLECTION_H

#include <QString>


class ClassCollection
{
public:
    ClassCollection();

public:
    QString m_classNumber;
    QString m_className;
    int m_classTime;
    QString m_classSite;
    QString m_classTech;
    double m_classScore;
    QString m_classPhase;

    //ClassCollection& operator=(const ClassCollection& other);

};

#endif // CLASSCOLLECTION_H
