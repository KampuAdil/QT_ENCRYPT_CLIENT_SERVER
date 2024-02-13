/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lnIPAddress;
    QLabel *label_2;
    QSpinBox *spnPort;
    QPushButton *btnConnect;
    QGroupBox *grpSendData;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *lnMessage;
    QPushButton *btnSend;
    QHBoxLayout *horizontalLayout;
    QRadioButton *AESButton;
    QRadioButton *RSAButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QListWidget *lstConsole;
    QPushButton *btnClear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(589, 388);
        MainWindow->setStyleSheet(QString::fromUtf8("#lnIPAddress[state = \"0\"]{\n"
"	\n"
"	background-color: rgb(234, 0, 0);\n"
"}\n"
"\n"
"#lnIPAddress[state = \"1\"]{\n"
"	\n"
"	background-color: rgb(67, 135, 100);\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(12, 11, 547, 332));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lnIPAddress = new QLineEdit(groupBox);
        lnIPAddress->setObjectName("lnIPAddress");
        lnIPAddress->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lnIPAddress);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spnPort = new QSpinBox(groupBox);
        spnPort->setObjectName("spnPort");
        spnPort->setMinimum(12345);
        spnPort->setMaximum(65535);

        formLayout->setWidget(1, QFormLayout::FieldRole, spnPort);

        btnConnect = new QPushButton(groupBox);
        btnConnect->setObjectName("btnConnect");

        formLayout->setWidget(2, QFormLayout::FieldRole, btnConnect);


        verticalLayout_2->addWidget(groupBox);

        grpSendData = new QGroupBox(widget);
        grpSendData->setObjectName("grpSendData");
        grpSendData->setEnabled(false);
        formLayout_2 = new QFormLayout(grpSendData);
        formLayout_2->setObjectName("formLayout_2");
        label_3 = new QLabel(grpSendData);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        lnMessage = new QLineEdit(grpSendData);
        lnMessage->setObjectName("lnMessage");
        lnMessage->setClearButtonEnabled(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lnMessage);

        btnSend = new QPushButton(grpSendData);
        btnSend->setObjectName("btnSend");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, btnSend);


        verticalLayout_2->addWidget(grpSendData);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        AESButton = new QRadioButton(widget);
        AESButton->setObjectName("AESButton");

        horizontalLayout->addWidget(AESButton);

        RSAButton = new QRadioButton(widget);
        RSAButton->setObjectName("RSAButton");

        horizontalLayout->addWidget(RSAButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lstConsole = new QListWidget(widget);
        lstConsole->setObjectName("lstConsole");

        verticalLayout->addWidget(lstConsole);

        btnClear = new QPushButton(widget);
        btnClear->setObjectName("btnClear");

        verticalLayout->addWidget(btnClear);


        horizontalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 589, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btnClear, &QPushButton::clicked, lstConsole, qOverload<>(&QListWidget::clear));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Client", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Connection information", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP Address:", nullptr));
        lnIPAddress->setInputMask(QCoreApplication::translate("MainWindow", "000.000.000.000;_", nullptr));
        lnIPAddress->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        lnIPAddress->setProperty("state", QVariant(QString()));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        btnConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        grpSendData->setTitle(QCoreApplication::translate("MainWindow", "Send Data", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Message:", nullptr));
        lnMessage->setText(QString());
        lnMessage->setProperty("state", QVariant(QString()));
        btnSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        AESButton->setText(QCoreApplication::translate("MainWindow", "AES 256", nullptr));
        RSAButton->setText(QCoreApplication::translate("MainWindow", "RSA", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
