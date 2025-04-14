/********************************************************************************
** Form generated from reading UI file 'adddoctorsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDOCTORSDIALOG_H
#define UI_ADDDOCTORSDIALOG_H

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

class Ui_AddDoctorsDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *familiyaLineEdit;
    QLabel *label_2;
    QLineEdit *imyaLineEdit;
    QLabel *label_3;
    QLineEdit *otchestvoLineEdit;
    QLabel *label_4;
    QLineEdit *dolzhnostLineEdit;
    QLabel *label_5;
    QLineEdit *nauchnoeZvanieLineEdit;
    QLabel *label_6;
    QLineEdit *adresLineEdit;
    QLabel *label_7;
    QSpinBox *stazhSpinBox;
    QLabel *label_8;
    QComboBox *departmentComboBox;

    void setupUi(QDialog *AddDoctorsDialog)
    {
        if (AddDoctorsDialog->objectName().isEmpty())
            AddDoctorsDialog->setObjectName("AddDoctorsDialog");
        AddDoctorsDialog->resize(506, 500);
        layoutWidget = new QWidget(AddDoctorsDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(280, 460, 201, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName("okButton");

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);

        layoutWidget1 = new QWidget(AddDoctorsDialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 20, 321, 432));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        familiyaLineEdit = new QLineEdit(layoutWidget1);
        familiyaLineEdit->setObjectName("familiyaLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, familiyaLineEdit);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        imyaLineEdit = new QLineEdit(layoutWidget1);
        imyaLineEdit->setObjectName("imyaLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, imyaLineEdit);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        otchestvoLineEdit = new QLineEdit(layoutWidget1);
        otchestvoLineEdit->setObjectName("otchestvoLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, otchestvoLineEdit);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        dolzhnostLineEdit = new QLineEdit(layoutWidget1);
        dolzhnostLineEdit->setObjectName("dolzhnostLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, dolzhnostLineEdit);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        formLayout->setWidget(8, QFormLayout::SpanningRole, label_5);

        nauchnoeZvanieLineEdit = new QLineEdit(layoutWidget1);
        nauchnoeZvanieLineEdit->setObjectName("nauchnoeZvanieLineEdit");

        formLayout->setWidget(9, QFormLayout::FieldRole, nauchnoeZvanieLineEdit);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        formLayout->setWidget(10, QFormLayout::LabelRole, label_6);

        adresLineEdit = new QLineEdit(layoutWidget1);
        adresLineEdit->setObjectName("adresLineEdit");

        formLayout->setWidget(11, QFormLayout::FieldRole, adresLineEdit);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        formLayout->setWidget(12, QFormLayout::SpanningRole, label_7);

        stazhSpinBox = new QSpinBox(layoutWidget1);
        stazhSpinBox->setObjectName("stazhSpinBox");

        formLayout->setWidget(13, QFormLayout::FieldRole, stazhSpinBox);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");

        formLayout->setWidget(14, QFormLayout::LabelRole, label_8);

        departmentComboBox = new QComboBox(layoutWidget1);
        departmentComboBox->setObjectName("departmentComboBox");

        formLayout->setWidget(15, QFormLayout::FieldRole, departmentComboBox);


        retranslateUi(AddDoctorsDialog);

        QMetaObject::connectSlotsByName(AddDoctorsDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDoctorsDialog)
    {
        AddDoctorsDialog->setWindowTitle(QCoreApplication::translate("AddDoctorsDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\321\200\320\260\321\207\320\260", nullptr));
        okButton->setText(QCoreApplication::translate("AddDoctorsDialog", "\320\236\320\232", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddDoctorsDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label->setText(QCoreApplication::translate("AddDoctorsDialog", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("AddDoctorsDialog", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("AddDoctorsDialog", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("AddDoctorsDialog", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("AddDoctorsDialog", "\320\235\320\260\321\203\321\207\320\275\320\276\320\265 \320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("AddDoctorsDialog", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_7->setText(QCoreApplication::translate("AddDoctorsDialog", "\320\241\321\202\320\260\320\266 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        label_8->setText(QCoreApplication::translate("AddDoctorsDialog", "\320\236\321\202\320\264\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDoctorsDialog: public Ui_AddDoctorsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDOCTORSDIALOG_H
