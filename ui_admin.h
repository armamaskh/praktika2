/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QWidget *centralwidget;
    QPushButton *undoedits;
    QFrame *line_2;
    QFrame *line_5;
    QFrame *line_7;
    QFrame *line_6;
    QFrame *line_4;
    QPushButton *addline;
    QPushButton *dobavlPOLZ;
    QPushButton *saveedit;
    QPushButton *nazad;
    QFrame *line_8;
    QPushButton *saveedit_2;
    QFrame *line;
    QFrame *line_3;
    QPushButton *vihod;
    QPushButton *delline;
    QFrame *frame;
    QLabel *inf_3;
    QLabel *fb_3;
    QRadioButton *information_3;
    QRadioButton *feedback_3;
    QRadioButton *personal_3;
    QLabel *pers_9;
    QRadioButton *addadmin;
    QLineEdit *login;
    QLineEdit *password;

    void setupUi(QMainWindow *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(1299, 587);
        admin->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"  border:8px solid #000000;\n"
"  border-radius: 25px;\n"
""));
        centralwidget = new QWidget(admin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        undoedits = new QPushButton(centralwidget);
        undoedits->setObjectName(QString::fromUtf8("undoedits"));
        undoedits->setGeometry(QRect(1050, 270, 71, 121));
        QFont font;
        font.setFamily(QString::fromUtf8("SETxt"));
        undoedits->setFont(font);
        undoedits->setStyleSheet(QString::fromUtf8("	background-color: rgb(255, 255, 255);\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);"));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(40, 18, 846, 5));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(883, 18, 31, 31));
        line_5->setStyleSheet(QString::fromUtf8("  border:5px solid #000000;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"border-top-left-radius : 0;\n"
"border-top-right-radius : 26;\n"
"border-bottom-right-radius: 0;\n"
"border-bottom-left-radius : 0;\n"
"\n"
"border-left: opx;\n"
"border-bottom: opx;"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(18, 531, 31, 41));
        line_7->setStyleSheet(QString::fromUtf8("  border:5px solid #000000;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"border-top-left-radius : 0;\n"
"border-top-right-radius : 0;\n"
"border-bottom-right-radius: 0;\n"
"border-bottom-left-radius : 26;\n"
"\n"
"border-right: opx;\n"
"border-top: opx;"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(883, 531, 31, 41));
        line_6->setStyleSheet(QString::fromUtf8("  border:5px solid #000000;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"border-top-left-radius : 0;\n"
"border-top-right-radius : 0;\n"
"border-bottom-right-radius: 26;\n"
"border-bottom-left-radius : 0;\n"
"\n"
"border-left: opx;\n"
"border-top: opx;"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(909, 46, 5, 491));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        addline = new QPushButton(centralwidget);
        addline->setObjectName(QString::fromUtf8("addline"));
        addline->setGeometry(QRect(1040, 120, 131, 141));
        addline->setFont(font);
        addline->setStyleSheet(QString::fromUtf8("	background-color: rgb(255, 255, 255);\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);"));
        dobavlPOLZ = new QPushButton(centralwidget);
        dobavlPOLZ->setObjectName(QString::fromUtf8("dobavlPOLZ"));
        dobavlPOLZ->setGeometry(QRect(930, 500, 241, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("SETxt"));
        font1.setPointSize(10);
        dobavlPOLZ->setFont(font1);
        dobavlPOLZ->setStyleSheet(QString::fromUtf8("	background-color: rgb(255, 255, 255);\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);"));
        saveedit = new QPushButton(centralwidget);
        saveedit->setObjectName(QString::fromUtf8("saveedit"));
        saveedit->setGeometry(QRect(930, 120, 101, 271));
        QFont font2;
        font2.setFamily(QString::fromUtf8("SETxt"));
        font2.setPointSize(9);
        saveedit->setFont(font2);
        saveedit->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 238, 255);\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);"));
        nazad = new QPushButton(centralwidget);
        nazad->setObjectName(QString::fromUtf8("nazad"));
        nazad->setGeometry(QRect(1130, 20, 121, 21));
        nazad->setFont(font2);
        nazad->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"  border:2px solid #000000;\n"
"  border-radius: 10px;\n"
"padding-left: 0px;\n"
"padding-up: 20px;"));
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(18, 18, 31, 31));
        line_8->setStyleSheet(QString::fromUtf8("  border:5px solid #000000;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"border-top-left-radius : 25;\n"
"border-top-right-radius : 0;\n"
"border-bottom-right-radius: 0;\n"
"border-bottom-left-radius : 0;\n"
"\n"
"border-right: opx;\n"
"border-bottom: opx;"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        saveedit_2 = new QPushButton(centralwidget);
        saveedit_2->setObjectName(QString::fromUtf8("saveedit_2"));
        saveedit_2->setGeometry(QRect(1140, 270, 141, 121));
        saveedit_2->setFont(font2);
        saveedit_2->setStyleSheet(QString::fromUtf8("	background-color: rgb(255, 255, 255);\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(40, 567, 847, 5));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(18, 40, 5, 492));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        vihod = new QPushButton(centralwidget);
        vihod->setObjectName(QString::fromUtf8("vihod"));
        vihod->setGeometry(QRect(1260, 20, 21, 21));
        vihod->setStyleSheet(QString::fromUtf8("  border:2px solid #000000;\n"
"  border-radius: 10px;\n"
"background-color: rgb(207, 20, 23);"));
        delline = new QPushButton(centralwidget);
        delline->setObjectName(QString::fromUtf8("delline"));
        delline->setGeometry(QRect(1200, 120, 81, 141));
        delline->setFont(font);
        delline->setStyleSheet(QString::fromUtf8("	background-color: rgb(255, 255, 255);\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(931, 50, 351, 61));
        frame->setStyleSheet(QString::fromUtf8("\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"background-color: rgb(255, 228, 228);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        inf_3 = new QLabel(frame);
        inf_3->setObjectName(QString::fromUtf8("inf_3"));
        inf_3->setGeometry(QRect(123, 30, 105, 19));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inf_3->sizePolicy().hasHeightForWidth());
        inf_3->setSizePolicy(sizePolicy);
        inf_3->setFont(font);
        inf_3->setContextMenuPolicy(Qt::NoContextMenu);
        inf_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"  border:0px solid #000000;\n"
"  border-radius: 0px;\n"
"color: rgb(0, 0, 0);"));
        inf_3->setTextFormat(Qt::RichText);
        inf_3->setAlignment(Qt::AlignCenter);
        fb_3 = new QLabel(frame);
        fb_3->setObjectName(QString::fromUtf8("fb_3"));
        fb_3->setGeometry(QRect(240, 30, 104, 19));
        sizePolicy.setHeightForWidth(fb_3->sizePolicy().hasHeightForWidth());
        fb_3->setSizePolicy(sizePolicy);
        fb_3->setFont(font);
        fb_3->setContextMenuPolicy(Qt::NoContextMenu);
        fb_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"  border:0px solid #000000;\n"
"  border-radius: 0px;\n"
"color: rgb(0, 0, 0);"));
        fb_3->setTextFormat(Qt::RichText);
        fb_3->setAlignment(Qt::AlignCenter);
        information_3 = new QRadioButton(frame);
        information_3->setObjectName(QString::fromUtf8("information_3"));
        information_3->setGeometry(QRect(124, 10, 105, 19));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(information_3->sizePolicy().hasHeightForWidth());
        information_3->setSizePolicy(sizePolicy1);
        information_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"  border:0px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);\n"
"\n"
"padding-left: 43px;"));
        feedback_3 = new QRadioButton(frame);
        feedback_3->setObjectName(QString::fromUtf8("feedback_3"));
        feedback_3->setGeometry(QRect(239, 10, 104, 19));
        sizePolicy1.setHeightForWidth(feedback_3->sizePolicy().hasHeightForWidth());
        feedback_3->setSizePolicy(sizePolicy1);
        feedback_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"  border:0px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 44px;"));
        personal_3 = new QRadioButton(frame);
        personal_3->setObjectName(QString::fromUtf8("personal_3"));
        personal_3->setGeometry(QRect(9, 10, 104, 19));
        sizePolicy1.setHeightForWidth(personal_3->sizePolicy().hasHeightForWidth());
        personal_3->setSizePolicy(sizePolicy1);
        personal_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"  border:0px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 44px;"));
        pers_9 = new QLabel(frame);
        pers_9->setObjectName(QString::fromUtf8("pers_9"));
        pers_9->setGeometry(QRect(10, 30, 104, 19));
        sizePolicy.setHeightForWidth(pers_9->sizePolicy().hasHeightForWidth());
        pers_9->setSizePolicy(sizePolicy);
        pers_9->setFont(font);
        pers_9->setContextMenuPolicy(Qt::NoContextMenu);
        pers_9->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"  border:0px solid #000000;\n"
"  border-radius: 0px;\n"
"color: rgb(0, 0, 0);"));
        pers_9->setTextFormat(Qt::RichText);
        pers_9->setAlignment(Qt::AlignCenter);
        addadmin = new QRadioButton(centralwidget);
        addadmin->setObjectName(QString::fromUtf8("addadmin"));
        addadmin->setGeometry(QRect(930, 500, 351, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("SETxt"));
        font3.setPointSize(8);
        addadmin->setFont(font3);
        addadmin->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"  border:1px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0.379538, y1:0.568, x2:0.581, y2:0.544682, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));\n"
"padding-left: 250px;"));
        login = new QLineEdit(centralwidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(930, 400, 231, 91));
        login->setStyleSheet(QString::fromUtf8("	background-color: rgb(255, 255, 255);\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 4px;\n"
"padding-right: 3px;\n"
"padding-top: 2px;\n"
""));
        password = new QLineEdit(centralwidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(1180, 400, 101, 91));
        password->setStyleSheet(QString::fromUtf8("	background-color: rgb(255, 255, 255);\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 4px;\n"
"padding-right: 3px;\n"
"padding-top: 2px;\n"
""));
        admin->setCentralWidget(centralwidget);
        addadmin->raise();
        undoedits->raise();
        line_2->raise();
        line_5->raise();
        line_7->raise();
        line_6->raise();
        line_4->raise();
        addline->raise();
        dobavlPOLZ->raise();
        saveedit->raise();
        nazad->raise();
        line_8->raise();
        saveedit_2->raise();
        line->raise();
        line_3->raise();
        vihod->raise();
        delline->raise();
        frame->raise();
        login->raise();
        password->raise();

        retranslateUi(admin);
        QObject::connect(vihod, SIGNAL(clicked()), admin, SLOT(close()));

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QMainWindow *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "MainWindow", nullptr));
        undoedits->setText(QApplication::translate("admin", "revert", nullptr));
        addline->setText(QApplication::translate("admin", "add", nullptr));
        dobavlPOLZ->setText(QApplication::translate("admin", "addUSER/ADMIN", nullptr));
        saveedit->setText(QApplication::translate("admin", "submit", nullptr));
        nazad->setText(QApplication::translate("admin", "avtorization", nullptr));
        saveedit_2->setText(QApplication::translate("admin", "update", nullptr));
        vihod->setText(QString());
        delline->setText(QApplication::translate("admin", "del", nullptr));
        inf_3->setText(QApplication::translate("admin", "information", nullptr));
        fb_3->setText(QApplication::translate("admin", "feedback", nullptr));
        information_3->setText(QString());
        feedback_3->setText(QString());
        personal_3->setText(QString());
        pers_9->setText(QApplication::translate("admin", "personal", nullptr));
        addadmin->setText(QApplication::translate("admin", "ADMIN", nullptr));
        login->setPlaceholderText(QApplication::translate("admin", "                      LOGIN", nullptr));
        password->setPlaceholderText(QApplication::translate("admin", "  PASSWORD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
