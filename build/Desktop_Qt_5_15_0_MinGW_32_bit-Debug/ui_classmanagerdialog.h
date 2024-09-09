/********************************************************************************
** Form generated from reading UI file 'classmanagerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSMANAGERDIALOG_H
#define UI_CLASSMANAGERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClassManagerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *EditNumber;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *EditName;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *EditTime;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *EditSite;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *EditTech;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *EditScore;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *EditPhase;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClassManagerDialog)
    {
        if (ClassManagerDialog->objectName().isEmpty())
            ClassManagerDialog->setObjectName(QString::fromUtf8("ClassManagerDialog"));
        ClassManagerDialog->resize(348, 468);
        verticalLayout = new QVBoxLayout(ClassManagerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(ClassManagerDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        EditNumber = new QLineEdit(widget);
        EditNumber->setObjectName(QString::fromUtf8("EditNumber"));

        horizontalLayout->addWidget(EditNumber);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(ClassManagerDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        EditName = new QLineEdit(widget_2);
        EditName->setObjectName(QString::fromUtf8("EditName"));

        horizontalLayout_2->addWidget(EditName);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(ClassManagerDialog);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        EditTime = new QLineEdit(widget_3);
        EditTime->setObjectName(QString::fromUtf8("EditTime"));

        horizontalLayout_3->addWidget(EditTime);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(ClassManagerDialog);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        EditSite = new QLineEdit(widget_4);
        EditSite->setObjectName(QString::fromUtf8("EditSite"));

        horizontalLayout_4->addWidget(EditSite);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(ClassManagerDialog);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        EditTech = new QLineEdit(widget_5);
        EditTech->setObjectName(QString::fromUtf8("EditTech"));

        horizontalLayout_5->addWidget(EditTech);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(ClassManagerDialog);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        EditScore = new QLineEdit(widget_6);
        EditScore->setObjectName(QString::fromUtf8("EditScore"));

        horizontalLayout_6->addWidget(EditScore);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(ClassManagerDialog);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        EditPhase = new QLineEdit(widget_7);
        EditPhase->setObjectName(QString::fromUtf8("EditPhase"));

        horizontalLayout_7->addWidget(EditPhase);


        verticalLayout->addWidget(widget_7);

        buttonBox = new QDialogButtonBox(ClassManagerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ClassManagerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ClassManagerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ClassManagerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ClassManagerDialog);
    } // setupUi

    void retranslateUi(QDialog *ClassManagerDialog)
    {
        ClassManagerDialog->setWindowTitle(QCoreApplication::translate("ClassManagerDialog", "\346\267\273\345\212\240", nullptr));
        label->setText(QCoreApplication::translate("ClassManagerDialog", "\350\257\276\347\250\213\347\274\226\345\217\267 ", nullptr));
        label_2->setText(QCoreApplication::translate("ClassManagerDialog", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("ClassManagerDialog", "\350\257\276\346\227\266", nullptr));
        label_4->setText(QCoreApplication::translate("ClassManagerDialog", "\346\225\231\345\256\244", nullptr));
        label_5->setText(QCoreApplication::translate("ClassManagerDialog", "\346\216\210\350\257\276\347\217\255\347\272\247", nullptr));
        label_6->setText(QCoreApplication::translate("ClassManagerDialog", "\345\255\246\345\210\206", nullptr));
        label_7->setText(QCoreApplication::translate("ClassManagerDialog", "\345\255\246\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClassManagerDialog: public Ui_ClassManagerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSMANAGERDIALOG_H
