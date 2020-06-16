/********************************************************************************
** Form generated from reading UI file 'serverdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERDLGBASE_H
#define UI_SERVERDLGBASE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CServerDlgBase
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *grbServerInfo;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *lblServerName;
    QLabel *lblLocationCity;
    QLabel *lblLocationCountry;
    QVBoxLayout *vboxLayout2;
    QLineEdit *edtServerName;
    QLineEdit *edtLocationCity;
    QComboBox *cbxLocationCountry;
    QCheckBox *chbStartOnOSStart;
    QPushButton *clientFromServer;
    QTreeWidget *lvwClients;
    QHBoxLayout *hboxLayout1;
    QCheckBox *chbRegisterServer;
    QSpacerItem *spacerItem;
    QLabel *lblRegSvrStatus;
    QHBoxLayout *hboxLayout2;
    QLabel *lblCentralServerAddress;
    QLineEdit *edtCentralServerAddress;
    QComboBox *cbxCentServAddrType;
    QHBoxLayout *hboxLayout3;
    QLabel *lblNameVersion;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *CServerDlgBase)
    {
        if (CServerDlgBase->objectName().isEmpty())
            CServerDlgBase->setObjectName(QStringLiteral("CServerDlgBase"));
        CServerDlgBase->resize(569, 471);
        QIcon icon;
        icon.addFile(QStringLiteral(":/png/main/res/fronticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CServerDlgBase->setWindowIcon(icon);
        CServerDlgBase->setStyleSheet(QLatin1String(" background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        CServerDlgBase->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(CServerDlgBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        grbServerInfo = new QGroupBox(CServerDlgBase);
        grbServerInfo->setObjectName(QStringLiteral("grbServerInfo"));
        grbServerInfo->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        hboxLayout = new QHBoxLayout(grbServerInfo);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        lblServerName = new QLabel(grbServerInfo);
        lblServerName->setObjectName(QStringLiteral("lblServerName"));
        lblServerName->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout1->addWidget(lblServerName);

        lblLocationCity = new QLabel(grbServerInfo);
        lblLocationCity->setObjectName(QStringLiteral("lblLocationCity"));
        lblLocationCity->setEnabled(true);
        lblLocationCity->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        lblLocationCity->setAlignment(Qt::AlignCenter);

        vboxLayout1->addWidget(lblLocationCity);

        lblLocationCountry = new QLabel(grbServerInfo);
        lblLocationCountry->setObjectName(QStringLiteral("lblLocationCountry"));

        vboxLayout1->addWidget(lblLocationCountry);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        edtServerName = new QLineEdit(grbServerInfo);
        edtServerName->setObjectName(QStringLiteral("edtServerName"));
        edtServerName->setEnabled(true);
        edtServerName->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));

        vboxLayout2->addWidget(edtServerName);

        edtLocationCity = new QLineEdit(grbServerInfo);
        edtLocationCity->setObjectName(QStringLiteral("edtLocationCity"));
        edtLocationCity->setEnabled(true);
        edtLocationCity->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        edtLocationCity->setClearButtonEnabled(false);

        vboxLayout2->addWidget(edtLocationCity);

        cbxLocationCountry = new QComboBox(grbServerInfo);
        cbxLocationCountry->setObjectName(QStringLiteral("cbxLocationCountry"));
        cbxLocationCountry->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        cbxLocationCountry->setLocale(QLocale(QLocale::Spanish, QLocale::Argentina));

        vboxLayout2->addWidget(cbxLocationCountry);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addWidget(grbServerInfo);

        chbStartOnOSStart = new QCheckBox(CServerDlgBase);
        chbStartOnOSStart->setObjectName(QStringLiteral("chbStartOnOSStart"));
        chbStartOnOSStart->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout->addWidget(chbStartOnOSStart);

        clientFromServer = new QPushButton(CServerDlgBase);
        clientFromServer->setObjectName(QStringLiteral("clientFromServer"));
        clientFromServer->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));

        vboxLayout->addWidget(clientFromServer);

        lvwClients = new QTreeWidget(CServerDlgBase);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setBackground(2, QColor(5, 5, 5, 5));
        __qtreewidgetitem->setForeground(2, brush);
        __qtreewidgetitem->setBackground(1, QColor(5, 5, 5, 5));
        __qtreewidgetitem->setForeground(1, brush);
        __qtreewidgetitem->setBackground(0, QColor(5, 5, 5, 5));
        __qtreewidgetitem->setForeground(0, brush);
        lvwClients->setHeaderItem(__qtreewidgetitem);
        lvwClients->setObjectName(QStringLiteral("lvwClients"));
        lvwClients->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        lvwClients->setRootIsDecorated(false);
        lvwClients->setColumnCount(3);

        vboxLayout->addWidget(lvwClients);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        chbRegisterServer = new QCheckBox(CServerDlgBase);
        chbRegisterServer->setObjectName(QStringLiteral("chbRegisterServer"));
        chbRegisterServer->setEnabled(true);
        chbRegisterServer->setFocusPolicy(Qt::NoFocus);
        chbRegisterServer->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        chbRegisterServer->setChecked(false);

        hboxLayout1->addWidget(chbRegisterServer);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        lblRegSvrStatus = new QLabel(CServerDlgBase);
        lblRegSvrStatus->setObjectName(QStringLiteral("lblRegSvrStatus"));
        lblRegSvrStatus->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        hboxLayout1->addWidget(lblRegSvrStatus);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        lblCentralServerAddress = new QLabel(CServerDlgBase);
        lblCentralServerAddress->setObjectName(QStringLiteral("lblCentralServerAddress"));
        lblCentralServerAddress->setEnabled(true);
        lblCentralServerAddress->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        hboxLayout2->addWidget(lblCentralServerAddress);

        edtCentralServerAddress = new QLineEdit(CServerDlgBase);
        edtCentralServerAddress->setObjectName(QStringLiteral("edtCentralServerAddress"));
        edtCentralServerAddress->setEnabled(true);
        edtCentralServerAddress->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        hboxLayout2->addWidget(edtCentralServerAddress);

        cbxCentServAddrType = new QComboBox(CServerDlgBase);
        cbxCentServAddrType->setObjectName(QStringLiteral("cbxCentServAddrType"));
        cbxCentServAddrType->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        cbxCentServAddrType->setLocale(QLocale(QLocale::Spanish, QLocale::Argentina));

        hboxLayout2->addWidget(cbxCentServAddrType);


        vboxLayout->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        lblNameVersion = new QLabel(CServerDlgBase);
        lblNameVersion->setObjectName(QStringLiteral("lblNameVersion"));
        lblNameVersion->setEnabled(false);
        lblNameVersion->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" "));
        lblNameVersion->setWordWrap(false);

        hboxLayout3->addWidget(lblNameVersion);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout3);

        QWidget::setTabOrder(lvwClients, chbRegisterServer);
        QWidget::setTabOrder(chbRegisterServer, edtCentralServerAddress);
        QWidget::setTabOrder(edtCentralServerAddress, cbxCentServAddrType);
        QWidget::setTabOrder(cbxCentServAddrType, edtServerName);
        QWidget::setTabOrder(edtServerName, edtLocationCity);

        retranslateUi(CServerDlgBase);

        cbxLocationCountry->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(CServerDlgBase);
    } // setupUi

    void retranslateUi(QDialog *CServerDlgBase)
    {
        CServerDlgBase->setWindowTitle(QString());
        grbServerInfo->setTitle(QApplication::translate("CServerDlgBase", "Informaci\303\263n de mi Sala de Ensayo", Q_NULLPTR));
        lblServerName->setText(QApplication::translate("CServerDlgBase", "Nombre de la Sala", Q_NULLPTR));
        lblLocationCity->setText(QApplication::translate("CServerDlgBase", "Password", Q_NULLPTR));
        lblLocationCountry->setText(QApplication::translate("CServerDlgBase", "TextLabel", Q_NULLPTR));
        chbStartOnOSStart->setText(QApplication::translate("CServerDlgBase", "chbStartOnOSStart", Q_NULLPTR));
        clientFromServer->setText(QApplication::translate("CServerDlgBase", "Conectate a tu sala!", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = lvwClients->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("CServerDlgBase", "Jitter Buffer Size", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("CServerDlgBase", "Nombre", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("CServerDlgBase", "IP del Cliente", Q_NULLPTR));
        chbRegisterServer->setText(QApplication::translate("CServerDlgBase", "Hacer Privada mi Sala de Ensayo ", Q_NULLPTR));
        chbRegisterServer->setShortcut(QString());
        lblRegSvrStatus->setText(QApplication::translate("CServerDlgBase", "STATUS", Q_NULLPTR));
        lblCentralServerAddress->setText(QApplication::translate("CServerDlgBase", "Central de Salas de Ensayo", Q_NULLPTR));
        lblNameVersion->setText(QApplication::translate("CServerDlgBase", "TextLabelNameVersion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CServerDlgBase: public Ui_CServerDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERDLGBASE_H
