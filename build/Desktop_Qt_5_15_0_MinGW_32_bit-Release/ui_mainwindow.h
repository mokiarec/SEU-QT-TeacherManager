/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_11;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QTableView *TeacherView;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *AddTeacherButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *DeleteTeacherButton;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout;
    QPushButton *RandomButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *randomEdit;
    QLabel *label_9;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QFrame *Choose_frame;
    QVBoxLayout *verticalLayout;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *Choose_Profession;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QComboBox *Choose_Education;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QRadioButton *Choose_Male;
    QRadioButton *Choose_Female;
    QRadioButton *Choose_Unsex;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QRadioButton *Choose_Yes;
    QRadioButton *Choose_No;
    QRadioButton *Choose_Unmarriage;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QDateEdit *EndDate;
    QLabel *label_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QDateEdit *StartDate;
    QLabel *label_5;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *FilterButton;
    QPushButton *ClearButton;
    QListView *ClassView;
    QPushButton *ManagerButton;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1138, 690);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_11 = new QHBoxLayout(centralwidget);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        TeacherView = new QTableView(widget_2);
        TeacherView->setObjectName(QString::fromUtf8("TeacherView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TeacherView->sizePolicy().hasHeightForWidth());
        TeacherView->setSizePolicy(sizePolicy1);
        TeacherView->horizontalHeader()->setDefaultSectionSize(93);
        TeacherView->verticalHeader()->setVisible(true);

        verticalLayout_2->addWidget(TeacherView);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        widget_9 = new QWidget(groupBox);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        sizePolicy.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy);
        horizontalLayout_10 = new QHBoxLayout(widget_9);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        AddTeacherButton = new QPushButton(widget_9);
        AddTeacherButton->setObjectName(QString::fromUtf8("AddTeacherButton"));

        horizontalLayout_10->addWidget(AddTeacherButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        DeleteTeacherButton = new QPushButton(widget_9);
        DeleteTeacherButton->setObjectName(QString::fromUtf8("DeleteTeacherButton"));

        horizontalLayout_10->addWidget(DeleteTeacherButton);

        horizontalSpacer_3 = new QSpacerItem(220, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        formLayout->setWidget(0, QFormLayout::LabelRole, widget_9);

        widget_11 = new QWidget(groupBox);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_11->sizePolicy().hasHeightForWidth());
        widget_11->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(widget_11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        RandomButton = new QPushButton(widget_11);
        RandomButton->setObjectName(QString::fromUtf8("RandomButton"));
        QFont font;
        font.setUnderline(true);
        font.setStrikeOut(false);
        RandomButton->setFont(font);

        horizontalLayout->addWidget(RandomButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        randomEdit = new QLineEdit(widget_11);
        randomEdit->setObjectName(QString::fromUtf8("randomEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(randomEdit->sizePolicy().hasHeightForWidth());
        randomEdit->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(randomEdit);

        label_9 = new QLabel(widget_11);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_9);


        formLayout->setWidget(0, QFormLayout::FieldRole, widget_11);


        verticalLayout_2->addWidget(groupBox);


        horizontalLayout_11->addWidget(widget_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Choose_frame = new QFrame(widget);
        Choose_frame->setObjectName(QString::fromUtf8("Choose_frame"));
        Choose_frame->setFrameShape(QFrame::Box);
        Choose_frame->setFrameShadow(QFrame::Raised);
        Choose_frame->setLineWidth(2);
        verticalLayout = new QVBoxLayout(Choose_frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 5, -1, -1);
        widget_8 = new QWidget(Choose_frame);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        verticalLayout_4 = new QVBoxLayout(widget_8);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(1, 8, 1, 1);
        label_7 = new QLabel(widget_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_7);


        verticalLayout->addWidget(widget_8);

        frame_2 = new QFrame(Choose_frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        Choose_Profession = new QComboBox(frame_2);
        Choose_Profession->addItem(QString());
        Choose_Profession->addItem(QString());
        Choose_Profession->addItem(QString());
        Choose_Profession->addItem(QString());
        Choose_Profession->addItem(QString());
        Choose_Profession->addItem(QString());
        Choose_Profession->setObjectName(QString::fromUtf8("Choose_Profession"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(Choose_Profession->sizePolicy().hasHeightForWidth());
        Choose_Profession->setSizePolicy(sizePolicy5);
        Choose_Profession->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(Choose_Profession);


        verticalLayout->addWidget(frame_2);

        frame_5 = new QFrame(Choose_frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_5);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(1, 1, 1, 1);
        label_8 = new QLabel(frame_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_8);

        Choose_Education = new QComboBox(frame_5);
        Choose_Education->addItem(QString());
        Choose_Education->addItem(QString());
        Choose_Education->addItem(QString());
        Choose_Education->addItem(QString());
        Choose_Education->addItem(QString());
        Choose_Education->addItem(QString());
        Choose_Education->addItem(QString());
        Choose_Education->addItem(QString());
        Choose_Education->setObjectName(QString::fromUtf8("Choose_Education"));

        horizontalLayout_9->addWidget(Choose_Education);


        verticalLayout->addWidget(frame_5);

        frame_3 = new QFrame(Choose_frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(1, 1, 1, 1);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        Choose_Male = new QRadioButton(frame_3);
        Choose_Male->setObjectName(QString::fromUtf8("Choose_Male"));

        horizontalLayout_3->addWidget(Choose_Male);

        Choose_Female = new QRadioButton(frame_3);
        Choose_Female->setObjectName(QString::fromUtf8("Choose_Female"));

        horizontalLayout_3->addWidget(Choose_Female);

        Choose_Unsex = new QRadioButton(frame_3);
        Choose_Unsex->setObjectName(QString::fromUtf8("Choose_Unsex"));
        Choose_Unsex->setChecked(true);

        horizontalLayout_3->addWidget(Choose_Unsex);


        verticalLayout->addWidget(frame_3);

        frame_4 = new QFrame(Choose_frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(1, 1, 1, 1);
        label_6 = new QLabel(frame_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_6);

        Choose_Yes = new QRadioButton(frame_4);
        Choose_Yes->setObjectName(QString::fromUtf8("Choose_Yes"));

        horizontalLayout_7->addWidget(Choose_Yes);

        Choose_No = new QRadioButton(frame_4);
        Choose_No->setObjectName(QString::fromUtf8("Choose_No"));

        horizontalLayout_7->addWidget(Choose_No);

        Choose_Unmarriage = new QRadioButton(frame_4);
        Choose_Unmarriage->setObjectName(QString::fromUtf8("Choose_Unmarriage"));
        Choose_Unmarriage->setChecked(true);

        horizontalLayout_7->addWidget(Choose_Unmarriage);


        verticalLayout->addWidget(frame_4);

        widget_3 = new QWidget(Choose_frame);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_6 = new QHBoxLayout(widget_3);
        horizontalLayout_6->setSpacing(1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(1, 1, 1, 1);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_3);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_3 = new QVBoxLayout(widget_6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(1, 1, 1, 1);
        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(1, 1, 1, 1);
        EndDate = new QDateEdit(widget_4);
        EndDate->setObjectName(QString::fromUtf8("EndDate"));
        EndDate->setDateTime(QDateTime(QDate(2024, 12, 31), QTime(15, 59, 59)));
        EndDate->setDate(QDate(2024, 12, 31));

        horizontalLayout_4->addWidget(EndDate);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);


        verticalLayout_3->addWidget(widget_4);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(1, 1, 1, 1);
        StartDate = new QDateEdit(widget_5);
        StartDate->setObjectName(QString::fromUtf8("StartDate"));
        StartDate->setDateTime(QDateTime(QDate(1949, 10, 1), QTime(0, 0, 0)));

        horizontalLayout_5->addWidget(StartDate);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);


        verticalLayout_3->addWidget(widget_5);


        horizontalLayout_6->addWidget(widget_6);


        verticalLayout->addWidget(widget_3);

        widget_7 = new QWidget(Choose_frame);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_8 = new QHBoxLayout(widget_7);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(1, 1, 1, 1);
        FilterButton = new QPushButton(widget_7);
        FilterButton->setObjectName(QString::fromUtf8("FilterButton"));

        horizontalLayout_8->addWidget(FilterButton);


        verticalLayout->addWidget(widget_7);


        gridLayout_2->addWidget(Choose_frame, 1, 0, 1, 1);

        ClearButton = new QPushButton(widget);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));

        gridLayout_2->addWidget(ClearButton, 4, 0, 1, 1);

        ClassView = new QListView(widget);
        ClassView->setObjectName(QString::fromUtf8("ClassView"));
        ClassView->setItemAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(ClassView, 0, 0, 1, 1);

        ManagerButton = new QPushButton(widget);
        ManagerButton->setObjectName(QString::fromUtf8("ManagerButton"));

        gridLayout_2->addWidget(ManagerButton, 2, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 3, 0, 1, 1);


        horizontalLayout_11->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1138, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\225\231\345\270\210\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        groupBox->setTitle(QString());
        AddTeacherButton->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        DeleteTeacherButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        RandomButton->setText(QCoreApplication::translate("MainWindow", "\351\232\217\346\234\272\347\224\237\346\210\220", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\350\277\207\346\273\244\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\201\214\347\247\260", nullptr));
        Choose_Profession->setItemText(0, QCoreApplication::translate("MainWindow", "\346\227\240\350\246\201\346\261\202", nullptr));
        Choose_Profession->setItemText(1, QCoreApplication::translate("MainWindow", "\344\270\211\347\272\247\346\225\231\345\270\210", nullptr));
        Choose_Profession->setItemText(2, QCoreApplication::translate("MainWindow", "\344\272\214\347\272\247\346\225\231\345\270\210", nullptr));
        Choose_Profession->setItemText(3, QCoreApplication::translate("MainWindow", "\344\270\200\347\272\247\346\225\231\345\270\210", nullptr));
        Choose_Profession->setItemText(4, QCoreApplication::translate("MainWindow", "\351\253\230\347\272\247\346\225\231\345\270\210", nullptr));
        Choose_Profession->setItemText(5, QCoreApplication::translate("MainWindow", "\346\255\243\351\253\230\347\272\247\346\225\231\345\270\210", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "\346\234\200\351\253\230\345\255\246\345\216\206", nullptr));
        Choose_Education->setItemText(0, QCoreApplication::translate("MainWindow", "\346\227\240\350\246\201\346\261\202", nullptr));
        Choose_Education->setItemText(1, QCoreApplication::translate("MainWindow", "\345\260\217\345\255\246", nullptr));
        Choose_Education->setItemText(2, QCoreApplication::translate("MainWindow", "\345\210\235\344\270\255", nullptr));
        Choose_Education->setItemText(3, QCoreApplication::translate("MainWindow", "\351\253\230\344\270\255", nullptr));
        Choose_Education->setItemText(4, QCoreApplication::translate("MainWindow", "\344\270\223\347\247\221", nullptr));
        Choose_Education->setItemText(5, QCoreApplication::translate("MainWindow", "\346\234\254\347\247\221", nullptr));
        Choose_Education->setItemText(6, QCoreApplication::translate("MainWindow", "\347\241\225\345\243\253\347\240\224\347\251\266\347\224\237", nullptr));
        Choose_Education->setItemText(7, QCoreApplication::translate("MainWindow", "\345\215\232\345\243\253\347\240\224\347\251\266\347\224\237", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        Choose_Male->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        Choose_Female->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        Choose_Unsex->setText(QCoreApplication::translate("MainWindow", "\346\227\240\350\246\201\346\261\202", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\251\232\345\247\273", nullptr));
        Choose_Yes->setText(QCoreApplication::translate("MainWindow", "\346\230\257", nullptr));
        Choose_No->setText(QCoreApplication::translate("MainWindow", "\345\220\246", nullptr));
        Choose_Unmarriage->setText(QCoreApplication::translate("MainWindow", "\346\227\240\350\246\201\346\261\202", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\211\215", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\220\216", nullptr));
        FilterButton->setText(QCoreApplication::translate("MainWindow", "\350\277\207\346\273\244", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\346\270\205\347\251\272", nullptr));
        ManagerButton->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\346\216\210\350\257\276", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
