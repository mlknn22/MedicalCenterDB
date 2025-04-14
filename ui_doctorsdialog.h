/********************************************************************************
** Form generated from reading UI file 'doctorsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORSDIALOG_H
#define UI_DOCTORSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorsdialog
{
public:
    QLabel *infoLabel;
    QTableView *doctorsTableView;
    QPushButton *exitButton;
    QLineEdit *searchLineEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addDoctor;
    QPushButton *deleteButton;

    void setupUi(QDialog *doctorsdialog)
    {
        if (doctorsdialog->objectName().isEmpty())
            doctorsdialog->setObjectName("doctorsdialog");
        doctorsdialog->resize(605, 443);
        infoLabel = new QLabel(doctorsdialog);
        infoLabel->setObjectName("infoLabel");
        infoLabel->setGeometry(QRect(31, 21, 235, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        infoLabel->setFont(font);
        doctorsTableView = new QTableView(doctorsdialog);
        doctorsTableView->setObjectName("doctorsTableView");
        doctorsTableView->setGeometry(QRect(30, 120, 541, 241));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(doctorsTableView->sizePolicy().hasHeightForWidth());
        doctorsTableView->setSizePolicy(sizePolicy);
        doctorsTableView->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        doctorsTableView->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        doctorsTableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    border: none;\n"
"    background-color: white;\n"
"    gridline-color: #dcdcdc;  /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\321\213\320\265 \320\273\320\270\320\275\320\270\320\270 \321\201\320\265\321\202\320\272\320\270 */\n"
"    selection-background-color: #e0e0e0; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 \321\201\321\202\321\200\320\276\320\272\320\270 */\n"
"    selection-color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 \321\201\321\202\321\200\320\276\320\272\320\270 */\n"
"    font-size: 12pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    color: #333333; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    alternate-bac"
                        "kground-color: #f9f9f9; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\264\320\273\321\217 \321\207\320\265\321\202\320\275\321\213\321\205 \321\201\321\202\321\200\320\276\320\272 */\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \321\217\321\207\320\265\320\265\320\272 */\n"
"    border: none;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #d0d0d0; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\321\205 \321\217\321\207\320\265\320\265\320\272 */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #f1f1f1; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\264\320\273\321\217 \320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\272\320\276\320\262 */\n"
"    color: #555555; /* \320"
                        "\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\272\320\276\320\262 */\n"
"    padding: 5px;\n"
"    border: 1px solid #dcdcdc; /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    font-weight: bold;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QHeaderView::section:horizontal {\n"
"    border-left: none;  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\273\320\265\320\262\321\203\321\216 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 \320\275\320\260 \320\263\320\276\321\200\320\270\320\267\320\276\320\275\321\202\320\260\320\273\321\214\320\275\321\213\321\205 \320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\272\320\260\321\205 */\n"
"}\n"
"\n"
"QHeaderView::section:vertical {\n"
"    border-top: none;  /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\262\320\265"
                        "\321\200\321\205\320\275\321\216\321\216 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 \320\275\320\260 \320\262\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\321\213\321\205 \320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\272\320\260\321\205 */\n"
"}\n"
"\n"
"QTableView::indicator:checked {\n"
"    background-color: #999999;  /* \320\246\320\262\320\265\321\202 \320\264\320\273\321\217 \321\204\320\273\320\260\320\266\320\272\320\276\320\262, \320\265\321\201\320\273\320\270 \320\265\321\201\321\202\321\214 */\n"
"}\n"
"\n"
"QTableView::indicator:unchecked {\n"
"    background-color: #dcdcdc;  /* \320\246\320\262\320\265\321\202 \320\264\320\273\321\217 \321\204\320\273\320\260\320\266\320\272\320\276\320\262, \320\265\321\201\320\273\320\270 \320\275\320\265\321\202 */\n"
"}\n"
""));
        doctorsTableView->horizontalHeader()->setCascadingSectionResizes(false);
        exitButton = new QPushButton(doctorsdialog);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(470, 380, 101, 29));
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
        searchLineEdit = new QLineEdit(doctorsdialog);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(30, 80, 541, 28));
        layoutWidget = new QWidget(doctorsdialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 380, 252, 39));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addDoctor = new QPushButton(layoutWidget);
        addDoctor->setObjectName("addDoctor");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addDoctor->sizePolicy().hasHeightForWidth());
        addDoctor->setSizePolicy(sizePolicy1);
        addDoctor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(240, 240, 240, 255); /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    color: #444444; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\265\321\200\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border: 1px solid #cccccc; /* \320\233\320\265\320\263\320\272\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 12px;\n"
"    padding: 8px 16px;\n"
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

        horizontalLayout->addWidget(addDoctor);

        deleteButton = new QPushButton(layoutWidget);
        deleteButton->setObjectName("deleteButton");
        sizePolicy1.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy1);
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(240, 240, 240, 255); /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    color: #444444; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\265\321\200\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border: 1px solid #cccccc; /* \320\233\320\265\320\263\320\272\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 12px;\n"
"    padding: 8px 16px;\n"
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

        horizontalLayout->addWidget(deleteButton);


        retranslateUi(doctorsdialog);

        QMetaObject::connectSlotsByName(doctorsdialog);
    } // setupUi

    void retranslateUi(QDialog *doctorsdialog)
    {
        doctorsdialog->setWindowTitle(QCoreApplication::translate("doctorsdialog", "\320\222\321\200\320\260\321\207\320\270", nullptr));
        infoLabel->setText(QCoreApplication::translate("doctorsdialog", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">\320\222\320\240\320\220\320\247\320\230</span></p></body></html>", nullptr));
        exitButton->setText(QCoreApplication::translate("doctorsdialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        addDoctor->setText(QCoreApplication::translate("doctorsdialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\321\200\320\260\321\207\320\260", nullptr));
        deleteButton->setText(QCoreApplication::translate("doctorsdialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorsdialog: public Ui_doctorsdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORSDIALOG_H
