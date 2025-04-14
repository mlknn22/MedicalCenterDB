/********************************************************************************
** Form generated from reading UI file 'addmedicalhistorydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEDICALHISTORYDIALOG_H
#define UI_ADDMEDICALHISTORYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMedicalHistoryDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QWidget *widget1;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLineEdit *diagnozLineEdit;
    QLabel *label_7;
    QDateEdit *dataZabolevaniyaDateEdit;
    QLabel *label_8;
    QDateEdit *dataVylechivaniyaDateEdit;
    QLabel *label_9;
    QComboBox *vidLecheniyaComboBox;
    QLabel *label_10;
    QComboBox *doctorComboBox;

    void setupUi(QDialog *AddMedicalHistoryDialog)
    {
        if (AddMedicalHistoryDialog->objectName().isEmpty())
            AddMedicalHistoryDialog->setObjectName("AddMedicalHistoryDialog");
        AddMedicalHistoryDialog->resize(520, 409);
        widget = new QWidget(AddMedicalHistoryDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(300, 360, 211, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(widget);
        okButton->setObjectName("okButton");

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);

        widget1 = new QWidget(AddMedicalHistoryDialog);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(41, 20, 291, 321));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        diagnozLineEdit = new QLineEdit(widget1);
        diagnozLineEdit->setObjectName("diagnozLineEdit");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, diagnozLineEdit);

        label_7 = new QLabel(widget1);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, label_7);

        dataZabolevaniyaDateEdit = new QDateEdit(widget1);
        dataZabolevaniyaDateEdit->setObjectName("dataZabolevaniyaDateEdit");

        formLayout_2->setWidget(6, QFormLayout::FieldRole, dataZabolevaniyaDateEdit);

        label_8 = new QLabel(widget1);
        label_8->setObjectName("label_8");

        formLayout_2->setWidget(8, QFormLayout::SpanningRole, label_8);

        dataVylechivaniyaDateEdit = new QDateEdit(widget1);
        dataVylechivaniyaDateEdit->setObjectName("dataVylechivaniyaDateEdit");

        formLayout_2->setWidget(11, QFormLayout::FieldRole, dataVylechivaniyaDateEdit);

        label_9 = new QLabel(widget1);
        label_9->setObjectName("label_9");

        formLayout_2->setWidget(12, QFormLayout::SpanningRole, label_9);

        vidLecheniyaComboBox = new QComboBox(widget1);
        vidLecheniyaComboBox->addItem(QString());
        vidLecheniyaComboBox->addItem(QString());
        vidLecheniyaComboBox->setObjectName("vidLecheniyaComboBox");

        formLayout_2->setWidget(13, QFormLayout::FieldRole, vidLecheniyaComboBox);

        label_10 = new QLabel(widget1);
        label_10->setObjectName("label_10");

        formLayout_2->setWidget(16, QFormLayout::SpanningRole, label_10);

        doctorComboBox = new QComboBox(widget1);
        doctorComboBox->setObjectName("doctorComboBox");

        formLayout_2->setWidget(17, QFormLayout::FieldRole, doctorComboBox);


        retranslateUi(AddMedicalHistoryDialog);

        QMetaObject::connectSlotsByName(AddMedicalHistoryDialog);
    } // setupUi

    void retranslateUi(QDialog *AddMedicalHistoryDialog)
    {
        AddMedicalHistoryDialog->setWindowTitle(QCoreApplication::translate("AddMedicalHistoryDialog", "Dialog", nullptr));
        okButton->setText(QCoreApplication::translate("AddMedicalHistoryDialog", "\320\236\320\232", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddMedicalHistoryDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("AddMedicalHistoryDialog", "\320\224\320\270\320\260\320\263\320\275\320\276\320\267", nullptr));
        label_7->setText(QCoreApplication::translate("AddMedicalHistoryDialog", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\261\320\276\320\273\320\265\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_8->setText(QCoreApplication::translate("AddMedicalHistoryDialog", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\267\320\264\320\276\321\200\320\276\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_9->setText(QCoreApplication::translate("AddMedicalHistoryDialog", "\320\222\320\270\320\264 \320\273\320\265\321\207\320\265\320\275\320\270\321\217", nullptr));
        vidLecheniyaComboBox->setItemText(0, QCoreApplication::translate("AddMedicalHistoryDialog", "\320\220\320\274\320\261\321\203\320\273\320\260\321\202\320\276\321\200\320\275\320\276\320\265", nullptr));
        vidLecheniyaComboBox->setItemText(1, QCoreApplication::translate("AddMedicalHistoryDialog", "\320\241\321\202\320\260\321\206\320\270\320\276\320\275\320\260\321\200\320\275\320\276\320\265", nullptr));

        label_10->setText(QCoreApplication::translate("AddMedicalHistoryDialog", "\320\233\320\265\321\207\320\260\321\211\320\270\320\271 \320\262\321\200\320\260\321\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMedicalHistoryDialog: public Ui_AddMedicalHistoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEDICALHISTORYDIALOG_H
