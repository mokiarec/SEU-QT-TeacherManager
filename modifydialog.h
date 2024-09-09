#ifndef MODIFYDIALOG_H
#define MODIFYDIALOG_H

#include "classcollection.h"

#include <QDialog>

namespace Ui {
class ModifyDialog;
}

class ModifyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyDialog(QWidget *parent = nullptr);
    ~ModifyDialog();

    QString ClassNumber();
    QString ClassName();
    int ClassTime();
    QString ClassSite();
    QString ClassTech();
    double ClassScore();
    QString ClassPhase();

    void ShowInfo(ClassCollection);

signals:
    void Modify_success(const QModelIndex&);

private:
    Ui::ModifyDialog *ui;
};

#endif // MODIFYDIALOG_H
