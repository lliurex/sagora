/********************************************************************************
** Form generated from reading UI file 'clientsettingsdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTSETTINGSDLGBASE_H
#define UI_CLIENTSETTINGSDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "multicolorled.h"

QT_BEGIN_NAMESPACE

class Ui_CClientSettingsDlgBase
{
public:
    QHBoxLayout *hboxLayout;
    QGroupBox *grbSoundCard;
    QVBoxLayout *vboxLayout;
    QLabel *lblSoundcardDevice;
    QComboBox *cbxSoundcard;
    QFrame *FrameSoundcardChannelSelection;
    QVBoxLayout *vboxLayout1;
    QLabel *lblInChannelMapping;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout2;
    QLabel *lblLInChan;
    QLabel *lblRInChan;
    QVBoxLayout *vboxLayout3;
    QComboBox *cbxLInChan;
    QComboBox *cbxRInChan;
    QLabel *lblOutChannelMapping;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout4;
    QLabel *lblLOutChan;
    QLabel *lblROutChan;
    QVBoxLayout *vboxLayout5;
    QComboBox *cbxLOutChan;
    QComboBox *cbxROutChan;
    QSpacerItem *spacerItem;
    QCheckBox *chbEnableOPUS64;
    QGroupBox *grbSoundCrdBufDelay;
    QVBoxLayout *vboxLayout6;
    QRadioButton *rbtBufferDelayPreferred;
    QRadioButton *rbtBufferDelayDefault;
    QRadioButton *rbtBufferDelaySafe;
    QPushButton *butDriverSetup;
    QCheckBox *bufferConfiguracion;
    QGroupBox *grbJitterBuffer;
    QVBoxLayout *vboxLayout7;
    QCheckBox *chbAutoJitBuf;
    QHBoxLayout *hboxLayout3;
    QLabel *lblNetBufLabel;
    QLabel *lblNetBufServerLabel;
    QHBoxLayout *hboxLayout4;
    QLabel *lblNetBuf;
    QLabel *lblNetBufServer;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem1;
    QSlider *sldNetBuf;
    QSpacerItem *spacerItem2;
    QSlider *sldNetBufServer;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacerItem3;
    CMultiColorLED *ledNetw;
    QSpacerItem *spacerItem4;
    QGroupBox *grbMeasureResults;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblAudioChannels;
    QLabel *lblAudioQuality;
    QLabel *lblNewClientLevel;
    QVBoxLayout *verticalLayout;
    QComboBox *cbxAudioChannels;
    QComboBox *cbxAudioQuality;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *edtNewClientLevel;
    QLabel *lblPercentUnit;
    QHBoxLayout *boxCheckNoUso;
    QCheckBox *chbGUIDesignFancy;
    QCheckBox *chbDisplayChannelLevels;
    QHBoxLayout *hboxLayout7;
    QLabel *lblCentralServerAddress;
    QComboBox *cbxCentServAddrType;
    QLineEdit *edtCentralServerAddress;
    QSpacerItem *spacerItem5;
    QHBoxLayout *hboxLayout8;
    QLabel *lblUpstream;
    QLabel *lblUpstreamValue;
    QHBoxLayout *hboxLayout9;
    QLabel *lblPingTime;
    QLabel *lblPingTimeValue;
    QHBoxLayout *hboxLayout10;
    QLabel *lblOverallDelay;
    QHBoxLayout *hboxLayout11;
    QLabel *lblOverallDelayValue;
    CMultiColorLED *ledOverallDelay;

    void setupUi(QDialog *CClientSettingsDlgBase)
    {
        if (CClientSettingsDlgBase->objectName().isEmpty())
            CClientSettingsDlgBase->setObjectName(QStringLiteral("CClientSettingsDlgBase"));
        CClientSettingsDlgBase->resize(686, 483);
        QIcon icon;
        icon.addFile(QStringLiteral(":/png/main/res/fronticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CClientSettingsDlgBase->setWindowIcon(icon);
        CClientSettingsDlgBase->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        CClientSettingsDlgBase->setSizeGripEnabled(true);
        hboxLayout = new QHBoxLayout(CClientSettingsDlgBase);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        grbSoundCard = new QGroupBox(CClientSettingsDlgBase);
        grbSoundCard->setObjectName(QStringLiteral("grbSoundCard"));
        vboxLayout = new QVBoxLayout(grbSoundCard);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        lblSoundcardDevice = new QLabel(grbSoundCard);
        lblSoundcardDevice->setObjectName(QStringLiteral("lblSoundcardDevice"));

        vboxLayout->addWidget(lblSoundcardDevice);

        cbxSoundcard = new QComboBox(grbSoundCard);
        cbxSoundcard->setObjectName(QStringLiteral("cbxSoundcard"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbxSoundcard->sizePolicy().hasHeightForWidth());
        cbxSoundcard->setSizePolicy(sizePolicy);
        cbxSoundcard->setMinimumSize(QSize(153, 0));
        cbxSoundcard->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout->addWidget(cbxSoundcard);

        FrameSoundcardChannelSelection = new QFrame(grbSoundCard);
        FrameSoundcardChannelSelection->setObjectName(QStringLiteral("FrameSoundcardChannelSelection"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(FrameSoundcardChannelSelection->sizePolicy().hasHeightForWidth());
        FrameSoundcardChannelSelection->setSizePolicy(sizePolicy1);
        FrameSoundcardChannelSelection->setFrameShape(QFrame::NoFrame);
        FrameSoundcardChannelSelection->setFrameShadow(QFrame::Plain);
        vboxLayout1 = new QVBoxLayout(FrameSoundcardChannelSelection);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        lblInChannelMapping = new QLabel(FrameSoundcardChannelSelection);
        lblInChannelMapping->setObjectName(QStringLiteral("lblInChannelMapping"));

        vboxLayout1->addWidget(lblInChannelMapping);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(3);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        lblLInChan = new QLabel(FrameSoundcardChannelSelection);
        lblLInChan->setObjectName(QStringLiteral("lblLInChan"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblLInChan->sizePolicy().hasHeightForWidth());
        lblLInChan->setSizePolicy(sizePolicy2);
        lblLInChan->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout2->addWidget(lblLInChan);

        lblRInChan = new QLabel(FrameSoundcardChannelSelection);
        lblRInChan->setObjectName(QStringLiteral("lblRInChan"));
        sizePolicy2.setHeightForWidth(lblRInChan->sizePolicy().hasHeightForWidth());
        lblRInChan->setSizePolicy(sizePolicy2);
        lblRInChan->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout2->addWidget(lblRInChan);


        hboxLayout1->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(3);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        cbxLInChan = new QComboBox(FrameSoundcardChannelSelection);
        cbxLInChan->setObjectName(QStringLiteral("cbxLInChan"));
        cbxLInChan->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout3->addWidget(cbxLInChan);

        cbxRInChan = new QComboBox(FrameSoundcardChannelSelection);
        cbxRInChan->setObjectName(QStringLiteral("cbxRInChan"));
        cbxRInChan->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout3->addWidget(cbxRInChan);


        hboxLayout1->addLayout(vboxLayout3);


        vboxLayout1->addLayout(hboxLayout1);

        lblOutChannelMapping = new QLabel(FrameSoundcardChannelSelection);
        lblOutChannelMapping->setObjectName(QStringLiteral("lblOutChannelMapping"));

        vboxLayout1->addWidget(lblOutChannelMapping);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(3);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setObjectName(QStringLiteral("vboxLayout4"));
        lblLOutChan = new QLabel(FrameSoundcardChannelSelection);
        lblLOutChan->setObjectName(QStringLiteral("lblLOutChan"));
        sizePolicy2.setHeightForWidth(lblLOutChan->sizePolicy().hasHeightForWidth());
        lblLOutChan->setSizePolicy(sizePolicy2);
        lblLOutChan->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout4->addWidget(lblLOutChan);

        lblROutChan = new QLabel(FrameSoundcardChannelSelection);
        lblROutChan->setObjectName(QStringLiteral("lblROutChan"));
        sizePolicy2.setHeightForWidth(lblROutChan->sizePolicy().hasHeightForWidth());
        lblROutChan->setSizePolicy(sizePolicy2);
        lblROutChan->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout4->addWidget(lblROutChan);


        hboxLayout2->addLayout(vboxLayout4);

        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setSpacing(3);
        vboxLayout5->setObjectName(QStringLiteral("vboxLayout5"));
        cbxLOutChan = new QComboBox(FrameSoundcardChannelSelection);
        cbxLOutChan->setObjectName(QStringLiteral("cbxLOutChan"));
        cbxLOutChan->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout5->addWidget(cbxLOutChan);

        cbxROutChan = new QComboBox(FrameSoundcardChannelSelection);
        cbxROutChan->setObjectName(QStringLiteral("cbxROutChan"));
        cbxROutChan->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout5->addWidget(cbxROutChan);


        hboxLayout2->addLayout(vboxLayout5);


        vboxLayout1->addLayout(hboxLayout2);


        vboxLayout->addWidget(FrameSoundcardChannelSelection);

        spacerItem = new QSpacerItem(153, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        chbEnableOPUS64 = new QCheckBox(grbSoundCard);
        chbEnableOPUS64->setObjectName(QStringLiteral("chbEnableOPUS64"));
        chbEnableOPUS64->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout->addWidget(chbEnableOPUS64);

        grbSoundCrdBufDelay = new QGroupBox(grbSoundCard);
        grbSoundCrdBufDelay->setObjectName(QStringLiteral("grbSoundCrdBufDelay"));
        vboxLayout6 = new QVBoxLayout(grbSoundCrdBufDelay);
        vboxLayout6->setObjectName(QStringLiteral("vboxLayout6"));
        rbtBufferDelayPreferred = new QRadioButton(grbSoundCrdBufDelay);
        rbtBufferDelayPreferred->setObjectName(QStringLiteral("rbtBufferDelayPreferred"));
        rbtBufferDelayPreferred->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout6->addWidget(rbtBufferDelayPreferred);

        rbtBufferDelayDefault = new QRadioButton(grbSoundCrdBufDelay);
        rbtBufferDelayDefault->setObjectName(QStringLiteral("rbtBufferDelayDefault"));
        rbtBufferDelayDefault->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout6->addWidget(rbtBufferDelayDefault);

        rbtBufferDelaySafe = new QRadioButton(grbSoundCrdBufDelay);
        rbtBufferDelaySafe->setObjectName(QStringLiteral("rbtBufferDelaySafe"));
        rbtBufferDelaySafe->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout6->addWidget(rbtBufferDelaySafe);

        butDriverSetup = new QPushButton(grbSoundCrdBufDelay);
        butDriverSetup->setObjectName(QStringLiteral("butDriverSetup"));
        butDriverSetup->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        butDriverSetup->setAutoDefault(false);

        vboxLayout6->addWidget(butDriverSetup);


        vboxLayout->addWidget(grbSoundCrdBufDelay);

        bufferConfiguracion = new QCheckBox(grbSoundCard);
        bufferConfiguracion->setObjectName(QStringLiteral("bufferConfiguracion"));
        bufferConfiguracion->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout->addWidget(bufferConfiguracion);


        hboxLayout->addWidget(grbSoundCard);

        grbJitterBuffer = new QGroupBox(CClientSettingsDlgBase);
        grbJitterBuffer->setObjectName(QStringLiteral("grbJitterBuffer"));
        vboxLayout7 = new QVBoxLayout(grbJitterBuffer);
        vboxLayout7->setObjectName(QStringLiteral("vboxLayout7"));
        chbAutoJitBuf = new QCheckBox(grbJitterBuffer);
        chbAutoJitBuf->setObjectName(QStringLiteral("chbAutoJitBuf"));
        chbAutoJitBuf->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        vboxLayout7->addWidget(chbAutoJitBuf);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        lblNetBufLabel = new QLabel(grbJitterBuffer);
        lblNetBufLabel->setObjectName(QStringLiteral("lblNetBufLabel"));
        lblNetBufLabel->setMinimumSize(QSize(50, 0));
        lblNetBufLabel->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        lblNetBufLabel->setAlignment(Qt::AlignCenter);
        lblNetBufLabel->setWordWrap(false);

        hboxLayout3->addWidget(lblNetBufLabel);

        lblNetBufServerLabel = new QLabel(grbJitterBuffer);
        lblNetBufServerLabel->setObjectName(QStringLiteral("lblNetBufServerLabel"));
        lblNetBufServerLabel->setMinimumSize(QSize(50, 0));
        lblNetBufServerLabel->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        lblNetBufServerLabel->setAlignment(Qt::AlignCenter);
        lblNetBufServerLabel->setWordWrap(false);

        hboxLayout3->addWidget(lblNetBufServerLabel);


        vboxLayout7->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        lblNetBuf = new QLabel(grbJitterBuffer);
        lblNetBuf->setObjectName(QStringLiteral("lblNetBuf"));
        lblNetBuf->setMinimumSize(QSize(50, 0));
        lblNetBuf->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        lblNetBuf->setAlignment(Qt::AlignCenter);
        lblNetBuf->setWordWrap(false);

        hboxLayout4->addWidget(lblNetBuf);

        lblNetBufServer = new QLabel(grbJitterBuffer);
        lblNetBufServer->setObjectName(QStringLiteral("lblNetBufServer"));
        lblNetBufServer->setMinimumSize(QSize(50, 0));
        lblNetBufServer->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        lblNetBufServer->setAlignment(Qt::AlignCenter);
        lblNetBufServer->setWordWrap(false);

        hboxLayout4->addWidget(lblNetBufServer);


        vboxLayout7->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem1);

        sldNetBuf = new QSlider(grbJitterBuffer);
        sldNetBuf->setObjectName(QStringLiteral("sldNetBuf"));
        sldNetBuf->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        sldNetBuf->setPageStep(1);
        sldNetBuf->setOrientation(Qt::Vertical);
        sldNetBuf->setTickPosition(QSlider::TicksBothSides);

        hboxLayout5->addWidget(sldNetBuf);

        spacerItem2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem2);

        sldNetBufServer = new QSlider(grbJitterBuffer);
        sldNetBufServer->setObjectName(QStringLiteral("sldNetBufServer"));
        sldNetBufServer->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        sldNetBufServer->setPageStep(1);
        sldNetBufServer->setOrientation(Qt::Vertical);
        sldNetBufServer->setTickPosition(QSlider::TicksBothSides);

        hboxLayout5->addWidget(sldNetBufServer);


        vboxLayout7->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        spacerItem3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem3);

        ledNetw = new CMultiColorLED(grbJitterBuffer);
        ledNetw->setObjectName(QStringLiteral("ledNetw"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ledNetw->sizePolicy().hasHeightForWidth());
        ledNetw->setSizePolicy(sizePolicy3);
        ledNetw->setMinimumSize(QSize(20, 20));
        ledNetw->setMaximumSize(QSize(20, 20));

        hboxLayout6->addWidget(ledNetw);

        spacerItem4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem4);


        vboxLayout7->addLayout(hboxLayout6);


        hboxLayout->addWidget(grbJitterBuffer);

        grbMeasureResults = new QGroupBox(CClientSettingsDlgBase);
        grbMeasureResults->setObjectName(QStringLiteral("grbMeasureResults"));
        verticalLayout_3 = new QVBoxLayout(grbMeasureResults);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lblAudioChannels = new QLabel(grbMeasureResults);
        lblAudioChannels->setObjectName(QStringLiteral("lblAudioChannels"));

        verticalLayout_2->addWidget(lblAudioChannels);

        lblAudioQuality = new QLabel(grbMeasureResults);
        lblAudioQuality->setObjectName(QStringLiteral("lblAudioQuality"));

        verticalLayout_2->addWidget(lblAudioQuality);

        lblNewClientLevel = new QLabel(grbMeasureResults);
        lblNewClientLevel->setObjectName(QStringLiteral("lblNewClientLevel"));

        verticalLayout_2->addWidget(lblNewClientLevel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cbxAudioChannels = new QComboBox(grbMeasureResults);
        cbxAudioChannels->setObjectName(QStringLiteral("cbxAudioChannels"));
        cbxAudioChannels->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        verticalLayout->addWidget(cbxAudioChannels);

        cbxAudioQuality = new QComboBox(grbMeasureResults);
        cbxAudioQuality->setObjectName(QStringLiteral("cbxAudioQuality"));
        cbxAudioQuality->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        verticalLayout->addWidget(cbxAudioQuality);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        edtNewClientLevel = new QLineEdit(grbMeasureResults);
        edtNewClientLevel->setObjectName(QStringLiteral("edtNewClientLevel"));
        edtNewClientLevel->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        horizontalLayout_4->addWidget(edtNewClientLevel);

        lblPercentUnit = new QLabel(grbMeasureResults);
        lblPercentUnit->setObjectName(QStringLiteral("lblPercentUnit"));
        lblPercentUnit->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        horizontalLayout_4->addWidget(lblPercentUnit);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        boxCheckNoUso = new QHBoxLayout();
        boxCheckNoUso->setObjectName(QStringLiteral("boxCheckNoUso"));
        chbGUIDesignFancy = new QCheckBox(grbMeasureResults);
        chbGUIDesignFancy->setObjectName(QStringLiteral("chbGUIDesignFancy"));

        boxCheckNoUso->addWidget(chbGUIDesignFancy);

        chbDisplayChannelLevels = new QCheckBox(grbMeasureResults);
        chbDisplayChannelLevels->setObjectName(QStringLiteral("chbDisplayChannelLevels"));

        boxCheckNoUso->addWidget(chbDisplayChannelLevels);


        verticalLayout_3->addLayout(boxCheckNoUso);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QStringLiteral("hboxLayout7"));
        lblCentralServerAddress = new QLabel(grbMeasureResults);
        lblCentralServerAddress->setObjectName(QStringLiteral("lblCentralServerAddress"));

        hboxLayout7->addWidget(lblCentralServerAddress);

        cbxCentServAddrType = new QComboBox(grbMeasureResults);
        cbxCentServAddrType->setObjectName(QStringLiteral("cbxCentServAddrType"));
        cbxCentServAddrType->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        hboxLayout7->addWidget(cbxCentServAddrType);


        verticalLayout_3->addLayout(hboxLayout7);

        edtCentralServerAddress = new QLineEdit(grbMeasureResults);
        edtCentralServerAddress->setObjectName(QStringLiteral("edtCentralServerAddress"));
        sizePolicy.setHeightForWidth(edtCentralServerAddress->sizePolicy().hasHeightForWidth());
        edtCentralServerAddress->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(edtCentralServerAddress);

        spacerItem5 = new QSpacerItem(201, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(spacerItem5);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QStringLiteral("hboxLayout8"));
        lblUpstream = new QLabel(grbMeasureResults);
        lblUpstream->setObjectName(QStringLiteral("lblUpstream"));
        lblUpstream->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        hboxLayout8->addWidget(lblUpstream);

        lblUpstreamValue = new QLabel(grbMeasureResults);
        lblUpstreamValue->setObjectName(QStringLiteral("lblUpstreamValue"));
        lblUpstreamValue->setMinimumSize(QSize(0, 20));
        lblUpstreamValue->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        hboxLayout8->addWidget(lblUpstreamValue);


        verticalLayout_3->addLayout(hboxLayout8);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QStringLiteral("hboxLayout9"));
        lblPingTime = new QLabel(grbMeasureResults);
        lblPingTime->setObjectName(QStringLiteral("lblPingTime"));
        lblPingTime->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        hboxLayout9->addWidget(lblPingTime);

        lblPingTimeValue = new QLabel(grbMeasureResults);
        lblPingTimeValue->setObjectName(QStringLiteral("lblPingTimeValue"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lblPingTimeValue->sizePolicy().hasHeightForWidth());
        lblPingTimeValue->setSizePolicy(sizePolicy4);
        lblPingTimeValue->setMinimumSize(QSize(50, 20));
        lblPingTimeValue->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        hboxLayout9->addWidget(lblPingTimeValue);


        verticalLayout_3->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setObjectName(QStringLiteral("hboxLayout10"));
        lblOverallDelay = new QLabel(grbMeasureResults);
        lblOverallDelay->setObjectName(QStringLiteral("lblOverallDelay"));
        lblOverallDelay->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        hboxLayout10->addWidget(lblOverallDelay);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(3);
        hboxLayout11->setObjectName(QStringLiteral("hboxLayout11"));
        lblOverallDelayValue = new QLabel(grbMeasureResults);
        lblOverallDelayValue->setObjectName(QStringLiteral("lblOverallDelayValue"));
        sizePolicy4.setHeightForWidth(lblOverallDelayValue->sizePolicy().hasHeightForWidth());
        lblOverallDelayValue->setSizePolicy(sizePolicy4);
        lblOverallDelayValue->setMinimumSize(QSize(50, 20));
        lblOverallDelayValue->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        hboxLayout11->addWidget(lblOverallDelayValue);

        ledOverallDelay = new CMultiColorLED(grbMeasureResults);
        ledOverallDelay->setObjectName(QStringLiteral("ledOverallDelay"));
        sizePolicy3.setHeightForWidth(ledOverallDelay->sizePolicy().hasHeightForWidth());
        ledOverallDelay->setSizePolicy(sizePolicy3);
        ledOverallDelay->setMinimumSize(QSize(20, 20));
        ledOverallDelay->setMaximumSize(QSize(20, 20));
        ledOverallDelay->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));

        hboxLayout11->addWidget(ledOverallDelay);


        hboxLayout10->addLayout(hboxLayout11);


        verticalLayout_3->addLayout(hboxLayout10);


        hboxLayout->addWidget(grbMeasureResults);

        QWidget::setTabOrder(cbxSoundcard, cbxLInChan);
        QWidget::setTabOrder(cbxLInChan, cbxRInChan);
        QWidget::setTabOrder(cbxRInChan, cbxLOutChan);
        QWidget::setTabOrder(cbxLOutChan, cbxROutChan);
        QWidget::setTabOrder(cbxROutChan, chbEnableOPUS64);
        QWidget::setTabOrder(chbEnableOPUS64, rbtBufferDelayPreferred);
        QWidget::setTabOrder(rbtBufferDelayPreferred, rbtBufferDelayDefault);
        QWidget::setTabOrder(rbtBufferDelayDefault, butDriverSetup);
        QWidget::setTabOrder(butDriverSetup, chbAutoJitBuf);
        QWidget::setTabOrder(chbAutoJitBuf, sldNetBuf);
        QWidget::setTabOrder(sldNetBuf, sldNetBufServer);
        QWidget::setTabOrder(sldNetBufServer, cbxAudioChannels);
        QWidget::setTabOrder(cbxAudioChannels, cbxAudioQuality);
        QWidget::setTabOrder(cbxAudioQuality, edtNewClientLevel);
        QWidget::setTabOrder(edtNewClientLevel, chbGUIDesignFancy);
        QWidget::setTabOrder(chbGUIDesignFancy, chbDisplayChannelLevels);
        QWidget::setTabOrder(chbDisplayChannelLevels, cbxCentServAddrType);
        QWidget::setTabOrder(cbxCentServAddrType, edtCentralServerAddress);

        retranslateUi(CClientSettingsDlgBase);

        QMetaObject::connectSlotsByName(CClientSettingsDlgBase);
    } // setupUi

    void retranslateUi(QDialog *CClientSettingsDlgBase)
    {
        CClientSettingsDlgBase->setWindowTitle(QApplication::translate("CClientSettingsDlgBase", "Configuraci\303\263n", Q_NULLPTR));
        grbSoundCard->setTitle(QApplication::translate("CClientSettingsDlgBase", "Opciones de Placas de Audio", Q_NULLPTR));
        lblSoundcardDevice->setText(QApplication::translate("CClientSettingsDlgBase", "Device", Q_NULLPTR));
        lblInChannelMapping->setText(QApplication::translate("CClientSettingsDlgBase", "Input Channel Mapping", Q_NULLPTR));
        lblLInChan->setText(QApplication::translate("CClientSettingsDlgBase", "L", Q_NULLPTR));
        lblRInChan->setText(QApplication::translate("CClientSettingsDlgBase", "R", Q_NULLPTR));
        lblOutChannelMapping->setText(QApplication::translate("CClientSettingsDlgBase", "Output Channel Mapping", Q_NULLPTR));
        lblLOutChan->setText(QApplication::translate("CClientSettingsDlgBase", "L", Q_NULLPTR));
        lblROutChan->setText(QApplication::translate("CClientSettingsDlgBase", "R", Q_NULLPTR));
        chbEnableOPUS64->setText(QApplication::translate("CClientSettingsDlgBase", "Enable Small Network Buffers", Q_NULLPTR));
        grbSoundCrdBufDelay->setTitle(QApplication::translate("CClientSettingsDlgBase", "Buffer Delay", Q_NULLPTR));
        rbtBufferDelayPreferred->setText(QApplication::translate("CClientSettingsDlgBase", "(preferred)", Q_NULLPTR));
        rbtBufferDelayDefault->setText(QApplication::translate("CClientSettingsDlgBase", "(default)", Q_NULLPTR));
        rbtBufferDelaySafe->setText(QApplication::translate("CClientSettingsDlgBase", "(safe)", Q_NULLPTR));
        butDriverSetup->setText(QApplication::translate("CClientSettingsDlgBase", "Driver Setup", Q_NULLPTR));
        bufferConfiguracion->setText(QApplication::translate("CClientSettingsDlgBase", "Mostrar Buffer y Configuraciones Avanzadas ", Q_NULLPTR));
        grbJitterBuffer->setTitle(QApplication::translate("CClientSettingsDlgBase", "Buffer", Q_NULLPTR));
        chbAutoJitBuf->setText(QApplication::translate("CClientSettingsDlgBase", "Auto", Q_NULLPTR));
        lblNetBufLabel->setText(QApplication::translate("CClientSettingsDlgBase", "Local", Q_NULLPTR));
        lblNetBufServerLabel->setText(QApplication::translate("CClientSettingsDlgBase", "Server", Q_NULLPTR));
        lblNetBuf->setText(QApplication::translate("CClientSettingsDlgBase", "Size", Q_NULLPTR));
        lblNetBufServer->setText(QApplication::translate("CClientSettingsDlgBase", "Size", Q_NULLPTR));
        grbMeasureResults->setTitle(QApplication::translate("CClientSettingsDlgBase", "Configuraci\303\263n Avanzada", Q_NULLPTR));
        lblAudioChannels->setText(QApplication::translate("CClientSettingsDlgBase", "Canales de Audio", Q_NULLPTR));
        lblAudioQuality->setText(QApplication::translate("CClientSettingsDlgBase", "Calidad de Audio", Q_NULLPTR));
        lblNewClientLevel->setText(QApplication::translate("CClientSettingsDlgBase", "Vol como Musico", Q_NULLPTR));
        lblPercentUnit->setText(QApplication::translate("CClientSettingsDlgBase", "%", Q_NULLPTR));
        chbGUIDesignFancy->setText(QApplication::translate("CClientSettingsDlgBase", "Color de Fondo", Q_NULLPTR));
        chbDisplayChannelLevels->setText(QApplication::translate("CClientSettingsDlgBase", "V\303\272metro", Q_NULLPTR));
        lblCentralServerAddress->setText(QApplication::translate("CClientSettingsDlgBase", "Central de Salas", Q_NULLPTR));
        lblUpstream->setText(QApplication::translate("CClientSettingsDlgBase", "Audio Stream Rate", Q_NULLPTR));
        lblUpstreamValue->setText(QApplication::translate("CClientSettingsDlgBase", "val", Q_NULLPTR));
        lblPingTime->setText(QApplication::translate("CClientSettingsDlgBase", "Ping Time", Q_NULLPTR));
        lblPingTimeValue->setText(QApplication::translate("CClientSettingsDlgBase", "val", Q_NULLPTR));
        lblOverallDelay->setText(QApplication::translate("CClientSettingsDlgBase", "Overall Delay", Q_NULLPTR));
        lblOverallDelayValue->setText(QApplication::translate("CClientSettingsDlgBase", "val", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CClientSettingsDlgBase: public Ui_CClientSettingsDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTSETTINGSDLGBASE_H
