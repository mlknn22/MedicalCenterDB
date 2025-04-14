QT       += core gui
QT       += core gui sql
RESOURCES += \
    images.qrc

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adddoctorsdialog.cpp \
    addmedicalhistorydialog.cpp \
    addpatientdialog.cpp \
    departmentsdialog.cpp \
    doctorsdialog.cpp \
    filterproxymodel.cpp \
    main.cpp \
    mainwindow.cpp \
    pacientsdialog.cpp

HEADERS += \
    adddoctorsdialog.h \
    addmedicalhistorydialog.h \
    addpatientdialog.h \
    departmentsdialog.h \
    doctorsdialog.h \
    filterproxymodel.h \
    mainwindow.h \
    pacientsdialog.h

FORMS += \
    adddoctorsdialog.ui \
    addmedicalhistorydialog.ui \
    addpatientdialog.ui \
    departmentsdialog.ui \
    doctorsdialog.ui \
    mainwindow.ui \
    pacientsdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
