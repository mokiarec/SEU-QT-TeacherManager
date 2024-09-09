#ifndef CLASSMANAGERDIALOG_H
#define CLASSMANAGERDIALOG_H

#include <QDialog>

namespace Ui {
class ClassManagerDialog;
}

class ClassManagerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClassManagerDialog(QWidget *parent = nullptr);
    ~ClassManagerDialog();

    QString ClassNumber();
    QString ClassName();
    int ClassTime();
    QString ClassSite();
    QString ClassTech();
    float ClassScore();
    QString ClassPhase();

private:
    Ui::ClassManagerDialog *ui;
};

#endif // CLASSMANAGERDIALOG_H
