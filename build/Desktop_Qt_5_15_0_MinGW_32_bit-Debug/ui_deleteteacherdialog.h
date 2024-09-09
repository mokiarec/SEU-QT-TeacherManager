/********************************************************************************
** Form generated from reading UI file 'deleteteacherdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETETEACHERDIALOG_H
#define UI_DELETETEACHERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeleteTeacherDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelInfo;
    QSpacerItem *verticalSpacer_3;
    QListView *listView;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelWarning;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeleteTeacherDialog)
    {
        if (DeleteTeacherDialog->objectName().isEmpty())
            DeleteTeacherDialog->setObjectName(QString::fromUtf8("DeleteTeacherDialog"));
        DeleteTeacherDialog->resize(262, 366);
        verticalLayout = new QVBoxLayout(DeleteTeacherDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 25, -1, -1);
        labelInfo = new QLabel(DeleteTeacherDialog);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));

        verticalLayout->addWidget(labelInfo);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        listView = new QListView(DeleteTeacherDialog);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(listView);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        labelWarning = new QLabel(DeleteTeacherDialog);
        labelWarning->setObjectName(QString::fromUtf8("labelWarning"));
        labelWarning->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelWarning);

        buttonBox = new QDialogButtonBox(DeleteTeacherDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DeleteTeacherDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DeleteTeacherDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DeleteTeacherDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DeleteTeacherDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteTeacherDialog)
    {
        DeleteTeacherDialog->setWindowTitle(QCoreApplication::translate("DeleteTeacherDialog", "\345\210\240\351\231\244", nullptr));
        labelInfo->setText(QCoreApplication::translate("DeleteTeacherDialog", "\345\210\240\351\231\244\347\232\204\346\225\231\345\270\210\344\277\241\346\201\257", nullptr));
        labelWarning->setText(QCoreApplication::translate("DeleteTeacherDialog", "\346\230\257\345\220\246\345\210\240\351\231\244\357\274\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteTeacherDialog: public Ui_DeleteTeacherDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETETEACHERDIALOG_H
