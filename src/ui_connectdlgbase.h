/********************************************************************************
** Form generated from reading UI file 'connectdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDLGBASE_H
#define UI_CONNECTDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CConnectDlgBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *lblServerAddr;
    QComboBox *cbxServerAddr;
    QHBoxLayout *_2;
    QLabel *titlePass;
    QComboBox *passSala;
    QHBoxLayout *horizontalLayout;
    QLabel *lblFilter;
    QLineEdit *edtFilter;
    QCheckBox *chbExpandAll;
    QTreeWidget *lvwServers;
    QHBoxLayout *hboxLayout1;
    QPushButton *butCancel;
    QPushButton *butConnect;

    void setupUi(QDialog *CConnectDlgBase)
    {
        if (CConnectDlgBase->objectName().isEmpty())
            CConnectDlgBase->setObjectName(QStringLiteral("CConnectDlgBase"));
        CConnectDlgBase->resize(487, 493);
        QIcon icon;
        icon.addFile(QStringLiteral(":/png/main/res/fronticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CConnectDlgBase->setWindowIcon(icon);
        CConnectDlgBase->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(14,87,41);\n"
""));
        CConnectDlgBase->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(CConnectDlgBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        lblServerAddr = new QLabel(CConnectDlgBase);
        lblServerAddr->setObjectName(QStringLiteral("lblServerAddr"));
        lblServerAddr->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        lblServerAddr->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(lblServerAddr);

        cbxServerAddr = new QComboBox(CConnectDlgBase);
        cbxServerAddr->setObjectName(QStringLiteral("cbxServerAddr"));
        cbxServerAddr->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        cbxServerAddr->setEditable(true);

        hboxLayout->addWidget(cbxServerAddr);


        vboxLayout->addLayout(hboxLayout);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        titlePass = new QLabel(CConnectDlgBase);
        titlePass->setObjectName(QStringLiteral("titlePass"));
        titlePass->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        titlePass->setAlignment(Qt::AlignCenter);

        _2->addWidget(titlePass);

        passSala = new QComboBox(CConnectDlgBase);
        passSala->setObjectName(QStringLiteral("passSala"));
        passSala->setFocusPolicy(Qt::WheelFocus);
        passSala->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        passSala->setEditable(true);
        passSala->setFrame(true);

        _2->addWidget(passSala);


        vboxLayout->addLayout(_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        lblFilter = new QLabel(CConnectDlgBase);
        lblFilter->setObjectName(QStringLiteral("lblFilter"));
        lblFilter->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(lblFilter);

        edtFilter = new QLineEdit(CConnectDlgBase);
        edtFilter->setObjectName(QStringLiteral("edtFilter"));
        edtFilter->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(edtFilter);

        chbExpandAll = new QCheckBox(CConnectDlgBase);
        chbExpandAll->setObjectName(QStringLiteral("chbExpandAll"));
        chbExpandAll->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(chbExpandAll);


        vboxLayout->addLayout(horizontalLayout);

        lvwServers = new QTreeWidget(CConnectDlgBase);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        QBrush brush1(QColor(14, 87, 41, 255));
        brush1.setStyle(Qt::NoBrush);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(3, Qt::AlignTrailing|Qt::AlignTop);
        __qtreewidgetitem->setBackground(3, QColor(5, 5, 5));
        __qtreewidgetitem->setForeground(3, brush1);
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignLeading|Qt::AlignVCenter);
        __qtreewidgetitem->setBackground(2, QColor(5, 5, 5, 5));
        __qtreewidgetitem->setForeground(2, brush);
        __qtreewidgetitem->setBackground(1, QColor(5, 5, 5, 5));
        __qtreewidgetitem->setForeground(1, brush);
        __qtreewidgetitem->setBackground(0, QColor(5, 5, 5, 5));
        __qtreewidgetitem->setForeground(0, brush);
        lvwServers->setHeaderItem(__qtreewidgetitem);
        lvwServers->setObjectName(QStringLiteral("lvwServers"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(lvwServers->sizePolicy().hasHeightForWidth());
        lvwServers->setSizePolicy(sizePolicy);
        lvwServers->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        lvwServers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvwServers->setTabKeyNavigation(true);

        vboxLayout->addWidget(lvwServers);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        butCancel = new QPushButton(CConnectDlgBase);
        butCancel->setObjectName(QStringLiteral("butCancel"));
        butCancel->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));

        hboxLayout1->addWidget(butCancel);

        butConnect = new QPushButton(CConnectDlgBase);
        butConnect->setObjectName(QStringLiteral("butConnect"));
        butConnect->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));

        hboxLayout1->addWidget(butConnect);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(CConnectDlgBase);

        butConnect->setDefault(true);


        QMetaObject::connectSlotsByName(CConnectDlgBase);
    } // setupUi

    void retranslateUi(QDialog *CConnectDlgBase)
    {
        CConnectDlgBase->setWindowTitle(QApplication::translate("CConnectDlgBase", "Connection Setup", Q_NULLPTR));
        lblServerAddr->setText(QApplication::translate("CConnectDlgBase", "Sala Name/Address", Q_NULLPTR));
        cbxServerAddr->setCurrentText(QString());
        titlePass->setText(QApplication::translate("CConnectDlgBase", "Password Sala", Q_NULLPTR));
        passSala->setCurrentText(QString());
        lblFilter->setText(QApplication::translate("CConnectDlgBase", "Filter", Q_NULLPTR));
        chbExpandAll->setText(QApplication::translate("CConnectDlgBase", "Show All Musicians", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = lvwServers->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("CConnectDlgBase", "Location", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("CConnectDlgBase", "M\303\272sicos ", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("CConnectDlgBase", "Ping Time", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("CConnectDlgBase", "Nombre de la Sala", Q_NULLPTR));
        butCancel->setText(QApplication::translate("CConnectDlgBase", "C&ancel", Q_NULLPTR));
        butConnect->setText(QApplication::translate("CConnectDlgBase", "&Connect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CConnectDlgBase: public Ui_CConnectDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDLGBASE_H
