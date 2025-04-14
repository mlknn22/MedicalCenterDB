/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *imageLabel;
    QPushButton *exitButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *doctorsButton;
    QPushButton *departmentsButton;
    QPushButton *infoButton;
    QPushButton *pacientsButton;
    QLabel *infoLabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(717, 543);
        MainWindow->setMinimumSize(QSize(717, 543));
        MainWindow->setMaximumSize(QSize(717, 543));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(280, 170, 371, 261));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);
        imageLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image.jpg")));
        imageLabel->setScaledContents(true);
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(540, 460, 111, 29));
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: red;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 5px; /* \320\236\320\272\321\200\321\203\320\263\320\273\321\221\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px; /* \320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\276 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: darkred; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
""));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 200, 171, 221));
        sizePolicy.setHeightForWidth(layoutWidget->sizePolicy().hasHeightForWidth());
        layoutWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        doctorsButton = new QPushButton(layoutWidget);
        doctorsButton->setObjectName("doctorsButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(doctorsButton->sizePolicy().hasHeightForWidth());
        doctorsButton->setSizePolicy(sizePolicy1);
        doctorsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(240, 240, 240, 255); /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    color: #444444; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\265\321\200\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border: 1px solid #cccccc; /* \320\233\320\265\320\263\320\272\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 12px;\n"
"    padding: 8px 16px;\n"
"    font-size: 11pt;\n"
"    font-family: \"Calibri\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(220, 220, 220, 255); /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border-color: #aaaaaa; /* \320\227\320\260\321\202\320\265\320\274\320\275\321\221\320\275\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */"
                        "\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(200, 200, 200, 255); /* \320\225\321\211\321\221 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border-color: #888888;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/doctor.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        doctorsButton->setIcon(icon);
        doctorsButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(doctorsButton, 1, 0, 1, 1);

        departmentsButton = new QPushButton(layoutWidget);
        departmentsButton->setObjectName("departmentsButton");
        sizePolicy1.setHeightForWidth(departmentsButton->sizePolicy().hasHeightForWidth());
        departmentsButton->setSizePolicy(sizePolicy1);
        departmentsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(240, 240, 240, 255); /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    color: #444444; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\265\321\200\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border: 1px solid #cccccc; /* \320\233\320\265\320\263\320\272\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 12px;\n"
"    padding: 8px 16px;\n"
"    font-size: 11pt;\n"
"    font-family: \"Calibri\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(220, 220, 220, 255); /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border-color: #aaaaaa; /* \320\227\320\260\321\202\320\265\320\274\320\275\321\221\320\275\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */"
                        "\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(200, 200, 200, 255); /* \320\225\321\211\321\221 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border-color: #888888;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/dep.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        departmentsButton->setIcon(icon1);

        gridLayout->addWidget(departmentsButton, 0, 0, 1, 1);

        infoButton = new QPushButton(layoutWidget);
        infoButton->setObjectName("infoButton");
        sizePolicy1.setHeightForWidth(infoButton->sizePolicy().hasHeightForWidth());
        infoButton->setSizePolicy(sizePolicy1);
        infoButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(240, 240, 240, 255); /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    color: #444444; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\265\321\200\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border: 1px solid #cccccc; /* \320\233\320\265\320\263\320\272\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 12px;\n"
"    padding: 8px 12px;\n"
"    font-size: 9pt;\n"
"    font-family: \"Calibri\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(220, 220, 220, 255); /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border-color: #aaaaaa; /* \320\227\320\260\321\202\320\265\320\274\320\275\321\221\320\275\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
""
                        "}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(200, 200, 200, 255); /* \320\225\321\211\321\221 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border-color: #888888;\n"
"}\n"
""));

        gridLayout->addWidget(infoButton, 3, 0, 1, 1);

        pacientsButton = new QPushButton(layoutWidget);
        pacientsButton->setObjectName("pacientsButton");
        sizePolicy1.setHeightForWidth(pacientsButton->sizePolicy().hasHeightForWidth());
        pacientsButton->setSizePolicy(sizePolicy1);
        pacientsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(240, 240, 240, 255); /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    color: #444444; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\265\321\200\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border: 1px solid #cccccc; /* \320\233\320\265\320\263\320\272\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 12px;\n"
"    padding: 8px 16px;\n"
"    font-size: 11pt;\n"
"    font-family: \"Calibri\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(220, 220, 220, 255); /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border-color: #aaaaaa; /* \320\227\320\260\321\202\320\265\320\274\320\275\321\221\320\275\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */"
                        "\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(200, 200, 200, 255); /* \320\225\321\211\321\221 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border-color: #888888;\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/pacients.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pacientsButton->setIcon(icon2);

        gridLayout->addWidget(pacientsButton, 2, 0, 1, 1);

        infoLabel = new QLabel(centralwidget);
        infoLabel->setObjectName("infoLabel");
        infoLabel->setGeometry(QRect(70, 30, 581, 132));
        QFont font;
        font.setFamilies({QString::fromUtf8("Nunito")});
        font.setPointSize(18);
        font.setBold(true);
        infoLabel->setFont(font);
        infoLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Nunito\", Arial, sans-serif; /* \320\232\321\200\320\260\321\201\320\270\320\262\321\213\320\271, \320\272\321\200\321\203\320\263\320\273\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"    font-size: 18pt;\n"
"    font-weight: bold;\n"
"    color: black; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\265\321\200\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background: transparent;\n"
"    padding: 5px;\n"
"    border-bottom: 2px solid #cccccc; /* \320\233\320\270\320\275\320\270\321\217 \320\277\320\276\320\264 \320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\272\320\276\320\274 */\n"
"    letter-spacing: 1px; /* \320\234\320\265\320\266\320\261\321\203\320\272\320\262\320\265\320\275\320\275\320\276\320\265 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 */\n"
"    text-align: center; /* \320\246\320\265\320\275\321\202\321\200\320\270\321\200"
                        "\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	background-color: #e6e7e8;\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MedicalCenter", nullptr));
        imageLabel->setText(QString());
        exitButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        doctorsButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\260\321\207\320\270", nullptr));
        departmentsButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\264\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        infoButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\271\n"
"\321\201\320\270\321\201\321\202\320\265\320\274\320\265", nullptr));
        pacientsButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202\321\213", nullptr));
        infoLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700;\">\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\276\320\275\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260</span></p><p align=\"center\"><span style=\" font-size:24pt; font-weight:700;\">\320\261\320\276\320\273\321\214\320\275\320\270\321\206\321\213</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
