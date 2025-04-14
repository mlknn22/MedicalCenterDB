/********************************************************************************
** Form generated from reading UI file 'addpatientdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPATIENTDIALOG_H
#define UI_ADDPATIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addpatientdialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QWidget *widget1;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *famLineEdit;
    QLabel *label_2;
    QLineEdit *imyaLineEdit;
    QLabel *label_3;
    QLineEdit *otchLineEdit;
    QLabel *label_4;
    QLineEdit *adresLineEdit;
    QLabel *label_5;
    QLineEdit *gorodLineEdit;
    QLabel *label_6;
    QSpinBox *vozrastSpinBox;
    QLabel *label_7;
    QComboBox *polComboBox;

    void setupUi(QDialog *addpatientdialog)
    {
        if (addpatientdialog->objectName().isEmpty())
            addpatientdialog->setObjectName("addpatientdialog");
        addpatientdialog->resize(400, 300);
        widget = new QWidget(addpatientdialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 260, 201, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(widget);
        okButton->setObjectName("okButton");

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);

        widget1 = new QWidget(addpatientdialog);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(11, 11, 301, 255));
        formLayout = new QFormLayout(widget1);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        famLineEdit = new QLineEdit(widget1);
        famLineEdit->setObjectName("famLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, famLineEdit);

        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        imyaLineEdit = new QLineEdit(widget1);
        imyaLineEdit->setObjectName("imyaLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, imyaLineEdit);

        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        otchLineEdit = new QLineEdit(widget1);
        otchLineEdit->setObjectName("otchLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, otchLineEdit);

        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        adresLineEdit = new QLineEdit(widget1);
        adresLineEdit->setObjectName("adresLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, adresLineEdit);

        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        gorodLineEdit = new QLineEdit(widget1);
        gorodLineEdit->setObjectName("gorodLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, gorodLineEdit);

        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        vozrastSpinBox = new QSpinBox(widget1);
        vozrastSpinBox->setObjectName("vozrastSpinBox");

        formLayout->setWidget(5, QFormLayout::FieldRole, vozrastSpinBox);

        label_7 = new QLabel(widget1);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        polComboBox = new QComboBox(widget1);
        polComboBox->addItem(QString());
        polComboBox->addItem(QString());
        polComboBox->setObjectName("polComboBox");

        formLayout->setWidget(6, QFormLayout::FieldRole, polComboBox);


        retranslateUi(addpatientdialog);

        QMetaObject::connectSlotsByName(addpatientdialog);
    } // setupUi

    void retranslateUi(QDialog *addpatientdialog)
    {
        addpatientdialog->setWindowTitle(QCoreApplication::translate("addpatientdialog", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        okButton->setText(QCoreApplication::translate("addpatientdialog", "\320\236\320\232", nullptr));
        cancelButton->setText(QCoreApplication::translate("addpatientdialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label->setText(QCoreApplication::translate("addpatientdialog", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("addpatientdialog", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("addpatientdialog", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("addpatientdialog", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_5->setText(QCoreApplication::translate("addpatientdialog", "\320\223\320\276\321\200\320\276\320\264", nullptr));
        label_6->setText(QCoreApplication::translate("addpatientdialog", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        label_7->setText(QCoreApplication::translate("addpatientdialog", "\320\237\320\276\320\273", nullptr));
        polComboBox->setItemText(0, QCoreApplication::translate("addpatientdialog", "\320\234\321\203\320\266\321\201\320\272\320\276\320\271", nullptr));
        polComboBox->setItemText(1, QCoreApplication::translate("addpatientdialog", "\320\226\320\265\320\275\321\201\320\272\320\270\320\271", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addpatientdialog: public Ui_addpatientdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPATIENTDIALOG_H
