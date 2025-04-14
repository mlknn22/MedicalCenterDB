/********************************************************************************
** Form generated from reading UI file 'departmentsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENTSDIALOG_H
#define UI_DEPARTMENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_departmentsdialog
{
public:
    QLabel *infoLabel;
    QTableView *departmentsTableView;
    QPushButton *exitButton;
    QLineEdit *searchLineEdit;

    void setupUi(QDialog *departmentsdialog)
    {
        if (departmentsdialog->objectName().isEmpty())
            departmentsdialog->setObjectName("departmentsdialog");
        departmentsdialog->resize(605, 430);
        infoLabel = new QLabel(departmentsdialog);
        infoLabel->setObjectName("infoLabel");
        infoLabel->setGeometry(QRect(31, 21, 235, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        infoLabel->setFont(font);
        departmentsTableView = new QTableView(departmentsdialog);
        departmentsTableView->setObjectName("departmentsTableView");
        departmentsTableView->setGeometry(QRect(30, 120, 541, 241));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(departmentsTableView->sizePolicy().hasHeightForWidth());
        departmentsTableView->setSizePolicy(sizePolicy);
        departmentsTableView->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        departmentsTableView->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        departmentsTableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        departmentsTableView->horizontalHeader()->setCascadingSectionResizes(false);
        exitButton = new QPushButton(departmentsdialog);
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
        searchLineEdit = new QLineEdit(departmentsdialog);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(30, 80, 541, 28));

        retranslateUi(departmentsdialog);

        QMetaObject::connectSlotsByName(departmentsdialog);
    } // setupUi

    void retranslateUi(QDialog *departmentsdialog)
    {
        departmentsdialog->setWindowTitle(QCoreApplication::translate("departmentsdialog", "\320\236\321\202\320\264\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        infoLabel->setText(QCoreApplication::translate("departmentsdialog", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">\320\236\320\242\320\224\320\225\320\233\320\225\320\235\320\230\320\257</span></p></body></html>", nullptr));
        exitButton->setText(QCoreApplication::translate("departmentsdialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class departmentsdialog: public Ui_departmentsdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENTSDIALOG_H
