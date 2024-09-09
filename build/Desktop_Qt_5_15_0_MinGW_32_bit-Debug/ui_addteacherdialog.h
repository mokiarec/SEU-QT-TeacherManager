/********************************************************************************
** Form generated from reading UI file 'addteacherdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTEACHERDIALOG_H
#define UI_ADDTEACHERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTeacherDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *EditNumber;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *EditName;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *ButtonMale;
    QSpacerItem *horizontalSpacer_14;
    QRadioButton *ButtonFemale;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QDateEdit *BirthdateEdit;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_8;
    QComboBox *ProfessionBox;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_10;
    QComboBox *EducationBox;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_7;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *EditWage;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_9;
    QWidget *widget7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QRadioButton *YesButton;
    QRadioButton *NoButton;
    QSpacerItem *verticalSpacer_8;
    QWidget *widget8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QPushButton *ClassShowButton;
    QSpacerItem *verticalSpacer_10;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddTeacherDialog)
    {
        if (AddTeacherDialog->objectName().isEmpty())
            AddTeacherDialog->setObjectName(QString::fromUtf8("AddTeacherDialog"));
        AddTeacherDialog->resize(311, 631);
        verticalLayout = new QVBoxLayout(AddTeacherDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(AddTeacherDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(AddTeacherDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        EditNumber = new QLineEdit(widget);
        EditNumber->setObjectName(QString::fromUtf8("EditNumber"));

        horizontalLayout->addWidget(EditNumber);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget1 = new QWidget(AddTeacherDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        EditName = new QLineEdit(widget1);
        EditName->setObjectName(QString::fromUtf8("EditName"));

        horizontalLayout_2->addWidget(EditName);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        widget2 = new QWidget(AddTeacherDialog);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        ButtonMale = new QRadioButton(widget2);
        ButtonMale->setObjectName(QString::fromUtf8("ButtonMale"));

        horizontalLayout_3->addWidget(ButtonMale);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_14);

        ButtonFemale = new QRadioButton(widget2);
        ButtonFemale->setObjectName(QString::fromUtf8("ButtonFemale"));

        horizontalLayout_3->addWidget(ButtonFemale);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_15);


        verticalLayout->addWidget(widget2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        widget3 = new QWidget(AddTeacherDialog);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        BirthdateEdit = new QDateEdit(widget3);
        BirthdateEdit->setObjectName(QString::fromUtf8("BirthdateEdit"));

        horizontalLayout_4->addWidget(BirthdateEdit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout->addWidget(widget3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        widget4 = new QWidget(AddTeacherDialog);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(widget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        ProfessionBox = new QComboBox(widget4);
        ProfessionBox->addItem(QString());
        ProfessionBox->addItem(QString());
        ProfessionBox->addItem(QString());
        ProfessionBox->addItem(QString());
        ProfessionBox->addItem(QString());
        ProfessionBox->addItem(QString());
        ProfessionBox->setObjectName(QString::fromUtf8("ProfessionBox"));

        horizontalLayout_5->addWidget(ProfessionBox);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        verticalLayout->addWidget(widget4);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        widget5 = new QWidget(AddTeacherDialog);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        horizontalLayout_6 = new QHBoxLayout(widget5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(widget5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        EducationBox = new QComboBox(widget5);
        EducationBox->addItem(QString());
        EducationBox->addItem(QString());
        EducationBox->addItem(QString());
        EducationBox->addItem(QString());
        EducationBox->addItem(QString());
        EducationBox->addItem(QString());
        EducationBox->addItem(QString());
        EducationBox->addItem(QString());
        EducationBox->setObjectName(QString::fromUtf8("EducationBox"));

        horizontalLayout_6->addWidget(EducationBox);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);


        verticalLayout->addWidget(widget5);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        widget6 = new QWidget(AddTeacherDialog);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        horizontalLayout_7 = new QHBoxLayout(widget6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(widget6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        horizontalSpacer_12 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        EditWage = new QLineEdit(widget6);
        EditWage->setObjectName(QString::fromUtf8("EditWage"));

        horizontalLayout_7->addWidget(EditWage);

        horizontalSpacer_13 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);


        verticalLayout->addWidget(widget6);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        widget7 = new QWidget(AddTeacherDialog);
        widget7->setObjectName(QString::fromUtf8("widget7"));
        horizontalLayout_8 = new QHBoxLayout(widget7);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(widget7);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        YesButton = new QRadioButton(widget7);
        YesButton->setObjectName(QString::fromUtf8("YesButton"));

        horizontalLayout_8->addWidget(YesButton);

        NoButton = new QRadioButton(widget7);
        NoButton->setObjectName(QString::fromUtf8("NoButton"));

        horizontalLayout_8->addWidget(NoButton);


        verticalLayout->addWidget(widget7);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        widget8 = new QWidget(AddTeacherDialog);
        widget8->setObjectName(QString::fromUtf8("widget8"));
        horizontalLayout_9 = new QHBoxLayout(widget8);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(widget8);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        ClassShowButton = new QPushButton(widget8);
        ClassShowButton->setObjectName(QString::fromUtf8("ClassShowButton"));

        horizontalLayout_9->addWidget(ClassShowButton);


        verticalLayout->addWidget(widget8);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_10);

        buttonBox = new QDialogButtonBox(AddTeacherDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddTeacherDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddTeacherDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddTeacherDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddTeacherDialog);
    } // setupUi

    void retranslateUi(QDialog *AddTeacherDialog)
    {
        AddTeacherDialog->setWindowTitle(QCoreApplication::translate("AddTeacherDialog", "\346\267\273\345\212\240", nullptr));
        label_2->setText(QCoreApplication::translate("AddTeacherDialog", "\346\267\273\345\212\240\346\225\231\345\270\210", nullptr));
        label_3->setText(QCoreApplication::translate("AddTeacherDialog", "\347\274\226\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("AddTeacherDialog", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("AddTeacherDialog", "\346\200\247\345\210\253", nullptr));
        ButtonMale->setText(QCoreApplication::translate("AddTeacherDialog", "\347\224\267", nullptr));
        ButtonFemale->setText(QCoreApplication::translate("AddTeacherDialog", "\345\245\263", nullptr));
        label_5->setText(QCoreApplication::translate("AddTeacherDialog", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_6->setText(QCoreApplication::translate("AddTeacherDialog", "\350\201\214\347\247\260", nullptr));
        ProfessionBox->setItemText(0, QCoreApplication::translate("AddTeacherDialog", "\346\234\252\347\237\245", nullptr));
        ProfessionBox->setItemText(1, QCoreApplication::translate("AddTeacherDialog", "\344\270\211\347\272\247\346\225\231\345\270\210", nullptr));
        ProfessionBox->setItemText(2, QCoreApplication::translate("AddTeacherDialog", "\344\272\214\347\272\247\346\225\231\345\270\210", nullptr));
        ProfessionBox->setItemText(3, QCoreApplication::translate("AddTeacherDialog", "\344\270\200\347\272\247\346\225\231\345\270\210", nullptr));
        ProfessionBox->setItemText(4, QCoreApplication::translate("AddTeacherDialog", "\351\253\230\347\272\247\346\225\231\345\270\210", nullptr));
        ProfessionBox->setItemText(5, QCoreApplication::translate("AddTeacherDialog", "\346\255\243\351\253\230\347\272\247\346\225\231\345\270\210", nullptr));

        label_7->setText(QCoreApplication::translate("AddTeacherDialog", "\346\234\200\351\253\230\345\255\246\345\216\206", nullptr));
        EducationBox->setItemText(0, QCoreApplication::translate("AddTeacherDialog", "\346\234\252\347\237\245", nullptr));
        EducationBox->setItemText(1, QCoreApplication::translate("AddTeacherDialog", "\345\260\217\345\255\246", nullptr));
        EducationBox->setItemText(2, QCoreApplication::translate("AddTeacherDialog", "\345\210\235\344\270\255", nullptr));
        EducationBox->setItemText(3, QCoreApplication::translate("AddTeacherDialog", "\351\253\230\344\270\255", nullptr));
        EducationBox->setItemText(4, QCoreApplication::translate("AddTeacherDialog", "\344\270\223\347\247\221", nullptr));
        EducationBox->setItemText(5, QCoreApplication::translate("AddTeacherDialog", "\346\234\254\347\247\221", nullptr));
        EducationBox->setItemText(6, QCoreApplication::translate("AddTeacherDialog", "\347\241\225\345\243\253\347\240\224\347\251\266\347\224\237", nullptr));
        EducationBox->setItemText(7, QCoreApplication::translate("AddTeacherDialog", "\345\215\232\345\243\253\347\240\224\347\251\266\347\224\237", nullptr));

        label_8->setText(QCoreApplication::translate("AddTeacherDialog", "\345\267\245\350\265\204", nullptr));
        label_9->setText(QCoreApplication::translate("AddTeacherDialog", "\345\251\232\345\220\246", nullptr));
        YesButton->setText(QCoreApplication::translate("AddTeacherDialog", "\346\230\257", nullptr));
        NoButton->setText(QCoreApplication::translate("AddTeacherDialog", "\345\220\246", nullptr));
        label_10->setText(QCoreApplication::translate("AddTeacherDialog", "\346\216\210\350\257\276\346\225\260\346\215\256\351\233\206", nullptr));
        ClassShowButton->setText(QCoreApplication::translate("AddTeacherDialog", "\345\261\225\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTeacherDialog: public Ui_AddTeacherDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTEACHERDIALOG_H
