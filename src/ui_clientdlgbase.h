/********************************************************************************
** Form generated from reading UI file 'clientdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTDLGBASE_H
#define UI_CLIENTDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "audiomixerboard.h"
#include "multicolorled.h"
#include "multicolorledbar.h"

QT_BEGIN_NAMESPACE

class Ui_CClientDlgBase
{
public:
    QHBoxLayout *hboxLayout;
    QFrame *backgroundFrame;
    QHBoxLayout *hboxLayout1;
    CAudioMixerBoard *MainMixerBoard;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *lblAudioPan;
    QLabel *lblAudioPanValue;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem;
    QSlider *sldAudioPan;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout2;
    QVBoxLayout *vboxLayout3;
    QLabel *lblAudioReverb;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem2;
    QSlider *sldAudioReverb;
    QSpacerItem *spacerItem3;
    QVBoxLayout *_2;
    QRadioButton *rbtReverbSelL;
    QRadioButton *rbtReverbSelR;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout4;
    QVBoxLayout *vboxLayout5;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout6;
    QLabel *lblDelay;
    CMultiColorLED *ledDelay;
    QSpacerItem *spacerItem5;
    QHBoxLayout *hboxLayout7;
    QLabel *lblBuffers;
    CMultiColorLED *ledBuffers;
    QSpacerItem *spacerItem6;
    QFrame *lineMeter;
    QVBoxLayout *vboxLayout6;
    QLabel *lblInputLEDMeter;
    QHBoxLayout *hboxLayout8;
    CMultiColorLEDBar *lbrInputLevelL;
    CMultiColorLEDBar *lbrInputLevelR;
    QHBoxLayout *hboxLayout9;
    QLabel *lblLevelMeterLeft;
    QLabel *lblLevelMeterRight;
    QSpacerItem *spacerItem7;
    QFrame *lineUpperLowerLeft;
    QCheckBox *chbPerfil;
    QCheckBox *chbSettings;
    QCheckBox *chbChat;
    QPushButton *Consola;
    QCheckBox *chbLocalMute;
    QPushButton *butConnect;

    void setupUi(QDialog *CClientDlgBase)
    {
        if (CClientDlgBase->objectName().isEmpty())
            CClientDlgBase->setObjectName(QStringLiteral("CClientDlgBase"));
        CClientDlgBase->resize(640, 376);
        QIcon icon;
        icon.addFile(QStringLiteral(":/png/main/res/fronticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CClientDlgBase->setWindowIcon(icon);
        CClientDlgBase->setSizeGripEnabled(true);
        hboxLayout = new QHBoxLayout(CClientDlgBase);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 3, 3);
        backgroundFrame = new QFrame(CClientDlgBase);
        backgroundFrame->setObjectName(QStringLiteral("backgroundFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backgroundFrame->sizePolicy().hasHeightForWidth());
        backgroundFrame->setSizePolicy(sizePolicy);
        backgroundFrame->setMinimumSize(QSize(0, 0));
        backgroundFrame->setFrameShape(QFrame::NoFrame);
        backgroundFrame->setFrameShadow(QFrame::Plain);
        hboxLayout1 = new QHBoxLayout(backgroundFrame);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        MainMixerBoard = new CAudioMixerBoard(backgroundFrame);
        MainMixerBoard->setObjectName(QStringLiteral("MainMixerBoard"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MainMixerBoard->sizePolicy().hasHeightForWidth());
        MainMixerBoard->setSizePolicy(sizePolicy1);

        hboxLayout1->addWidget(MainMixerBoard);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(3);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        lblAudioPan = new QLabel(backgroundFrame);
        lblAudioPan->setObjectName(QStringLiteral("lblAudioPan"));
        lblAudioPan->setAlignment(Qt::AlignCenter);

        vboxLayout1->addWidget(lblAudioPan);

        lblAudioPanValue = new QLabel(backgroundFrame);
        lblAudioPanValue->setObjectName(QStringLiteral("lblAudioPanValue"));
        lblAudioPanValue->setMinimumSize(QSize(50, 0));
        lblAudioPanValue->setAlignment(Qt::AlignCenter);
        lblAudioPanValue->setWordWrap(false);

        vboxLayout1->addWidget(lblAudioPanValue);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);

        sldAudioPan = new QSlider(backgroundFrame);
        sldAudioPan->setObjectName(QStringLiteral("sldAudioPan"));
        sldAudioPan->setPageStep(1);
        sldAudioPan->setOrientation(Qt::Vertical);
        sldAudioPan->setTickPosition(QSlider::TicksBothSides);

        hboxLayout2->addWidget(sldAudioPan);

        spacerItem1 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);


        vboxLayout1->addLayout(hboxLayout2);


        vboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(3);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        lblAudioReverb = new QLabel(backgroundFrame);
        lblAudioReverb->setObjectName(QStringLiteral("lblAudioReverb"));
        lblAudioReverb->setAlignment(Qt::AlignCenter);

        vboxLayout3->addWidget(lblAudioReverb);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        spacerItem2 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        sldAudioReverb = new QSlider(backgroundFrame);
        sldAudioReverb->setObjectName(QStringLiteral("sldAudioReverb"));
        sldAudioReverb->setPageStep(1);
        sldAudioReverb->setOrientation(Qt::Vertical);
        sldAudioReverb->setTickPosition(QSlider::TicksBothSides);

        hboxLayout3->addWidget(sldAudioReverb);

        spacerItem3 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);


        vboxLayout3->addLayout(hboxLayout3);


        vboxLayout2->addLayout(vboxLayout3);

        _2 = new QVBoxLayout();
        _2->setSpacing(3);
        _2->setObjectName(QStringLiteral("_2"));
        rbtReverbSelL = new QRadioButton(backgroundFrame);
        rbtReverbSelL->setObjectName(QStringLiteral("rbtReverbSelL"));

        _2->addWidget(rbtReverbSelL);

        rbtReverbSelR = new QRadioButton(backgroundFrame);
        rbtReverbSelR->setObjectName(QStringLiteral("rbtReverbSelR"));

        _2->addWidget(rbtReverbSelR);


        vboxLayout2->addLayout(_2);


        vboxLayout->addLayout(vboxLayout2);


        hboxLayout1->addLayout(vboxLayout);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setObjectName(QStringLiteral("vboxLayout4"));
        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setSpacing(3);
        vboxLayout5->setObjectName(QStringLiteral("vboxLayout5"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));

        vboxLayout5->addLayout(hboxLayout5);

        spacerItem4 = new QSpacerItem(13, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(spacerItem4);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        lblDelay = new QLabel(backgroundFrame);
        lblDelay->setObjectName(QStringLiteral("lblDelay"));
        lblDelay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblDelay->setWordWrap(false);

        hboxLayout6->addWidget(lblDelay);

        ledDelay = new CMultiColorLED(backgroundFrame);
        ledDelay->setObjectName(QStringLiteral("ledDelay"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ledDelay->sizePolicy().hasHeightForWidth());
        ledDelay->setSizePolicy(sizePolicy2);
        ledDelay->setMinimumSize(QSize(14, 14));
        ledDelay->setMaximumSize(QSize(14, 14));

        hboxLayout6->addWidget(ledDelay);


        vboxLayout5->addLayout(hboxLayout6);

        spacerItem5 = new QSpacerItem(13, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(spacerItem5);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QStringLiteral("hboxLayout7"));
        lblBuffers = new QLabel(backgroundFrame);
        lblBuffers->setObjectName(QStringLiteral("lblBuffers"));
        lblBuffers->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblBuffers->setWordWrap(false);

        hboxLayout7->addWidget(lblBuffers);

        ledBuffers = new CMultiColorLED(backgroundFrame);
        ledBuffers->setObjectName(QStringLiteral("ledBuffers"));
        sizePolicy2.setHeightForWidth(ledBuffers->sizePolicy().hasHeightForWidth());
        ledBuffers->setSizePolicy(sizePolicy2);
        ledBuffers->setMinimumSize(QSize(14, 14));
        ledBuffers->setMaximumSize(QSize(14, 14));

        hboxLayout7->addWidget(ledBuffers);


        vboxLayout5->addLayout(hboxLayout7);

        spacerItem6 = new QSpacerItem(13, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(spacerItem6);


        hboxLayout4->addLayout(vboxLayout5);

        lineMeter = new QFrame(backgroundFrame);
        lineMeter->setObjectName(QStringLiteral("lineMeter"));
        lineMeter->setFrameShape(QFrame::VLine);
        lineMeter->setFrameShadow(QFrame::Sunken);

        hboxLayout4->addWidget(lineMeter);

        vboxLayout6 = new QVBoxLayout();
        vboxLayout6->setObjectName(QStringLiteral("vboxLayout6"));
        lblInputLEDMeter = new QLabel(backgroundFrame);
        lblInputLEDMeter->setObjectName(QStringLiteral("lblInputLEDMeter"));
        lblInputLEDMeter->setAlignment(Qt::AlignCenter);

        vboxLayout6->addWidget(lblInputLEDMeter);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QStringLiteral("hboxLayout8"));
        lbrInputLevelL = new CMultiColorLEDBar(backgroundFrame);
        lbrInputLevelL->setObjectName(QStringLiteral("lbrInputLevelL"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lbrInputLevelL->sizePolicy().hasHeightForWidth());
        lbrInputLevelL->setSizePolicy(sizePolicy3);
        lbrInputLevelL->setMinimumSize(QSize(16, 88));

        hboxLayout8->addWidget(lbrInputLevelL);

        lbrInputLevelR = new CMultiColorLEDBar(backgroundFrame);
        lbrInputLevelR->setObjectName(QStringLiteral("lbrInputLevelR"));
        sizePolicy3.setHeightForWidth(lbrInputLevelR->sizePolicy().hasHeightForWidth());
        lbrInputLevelR->setSizePolicy(sizePolicy3);
        lbrInputLevelR->setMinimumSize(QSize(16, 88));

        hboxLayout8->addWidget(lbrInputLevelR);


        vboxLayout6->addLayout(hboxLayout8);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QStringLiteral("hboxLayout9"));
        lblLevelMeterLeft = new QLabel(backgroundFrame);
        lblLevelMeterLeft->setObjectName(QStringLiteral("lblLevelMeterLeft"));
        lblLevelMeterLeft->setAlignment(Qt::AlignCenter);

        hboxLayout9->addWidget(lblLevelMeterLeft);

        lblLevelMeterRight = new QLabel(backgroundFrame);
        lblLevelMeterRight->setObjectName(QStringLiteral("lblLevelMeterRight"));
        lblLevelMeterRight->setAlignment(Qt::AlignCenter);

        hboxLayout9->addWidget(lblLevelMeterRight);


        vboxLayout6->addLayout(hboxLayout9);


        hboxLayout4->addLayout(vboxLayout6);

        spacerItem7 = new QSpacerItem(13, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem7);


        vboxLayout4->addLayout(hboxLayout4);

        lineUpperLowerLeft = new QFrame(backgroundFrame);
        lineUpperLowerLeft->setObjectName(QStringLiteral("lineUpperLowerLeft"));
        lineUpperLowerLeft->setFrameShape(QFrame::HLine);
        lineUpperLowerLeft->setFrameShadow(QFrame::Sunken);

        vboxLayout4->addWidget(lineUpperLowerLeft);

        chbPerfil = new QCheckBox(backgroundFrame);
        chbPerfil->setObjectName(QStringLiteral("chbPerfil"));

        vboxLayout4->addWidget(chbPerfil);

        chbSettings = new QCheckBox(backgroundFrame);
        chbSettings->setObjectName(QStringLiteral("chbSettings"));

        vboxLayout4->addWidget(chbSettings);

        chbChat = new QCheckBox(backgroundFrame);
        chbChat->setObjectName(QStringLiteral("chbChat"));

        vboxLayout4->addWidget(chbChat);

        Consola = new QPushButton(backgroundFrame);
        Consola->setObjectName(QStringLiteral("Consola"));

        vboxLayout4->addWidget(Consola);

        chbLocalMute = new QCheckBox(backgroundFrame);
        chbLocalMute->setObjectName(QStringLiteral("chbLocalMute"));
        chbLocalMute->setEnabled(false);

        vboxLayout4->addWidget(chbLocalMute);

        butConnect = new QPushButton(backgroundFrame);
        butConnect->setObjectName(QStringLiteral("butConnect"));
        butConnect->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(40,40,40);\n"
"color: rgb(255, 255, 255);\n"
""));

        vboxLayout4->addWidget(butConnect);


        hboxLayout1->addLayout(vboxLayout4);


        hboxLayout->addWidget(backgroundFrame);

        QWidget::setTabOrder(butConnect, chbSettings);
        QWidget::setTabOrder(chbSettings, chbChat);
        QWidget::setTabOrder(chbChat, chbLocalMute);
        QWidget::setTabOrder(chbLocalMute, sldAudioPan);
        QWidget::setTabOrder(sldAudioPan, sldAudioReverb);
        QWidget::setTabOrder(sldAudioReverb, rbtReverbSelL);
        QWidget::setTabOrder(rbtReverbSelL, rbtReverbSelR);

        retranslateUi(CClientDlgBase);

        butConnect->setDefault(true);


        QMetaObject::connectSlotsByName(CClientDlgBase);
    } // setupUi

    void retranslateUi(QDialog *CClientDlgBase)
    {
        CClientDlgBase->setWindowTitle(QString());
        CClientDlgBase->setStyleSheet(QString());
        lblAudioPan->setText(QApplication::translate("CClientDlgBase", "Pan", Q_NULLPTR));
        lblAudioPanValue->setText(QApplication::translate("CClientDlgBase", "Center", Q_NULLPTR));
        sldAudioPan->setStyleSheet(QString());
        lblAudioReverb->setText(QApplication::translate("CClientDlgBase", "Reverb", Q_NULLPTR));
        rbtReverbSelL->setText(QApplication::translate("CClientDlgBase", "Reverb L", Q_NULLPTR));
        rbtReverbSelR->setText(QApplication::translate("CClientDlgBase", "Reverb R", Q_NULLPTR));
        lblDelay->setText(QApplication::translate("CClientDlgBase", "Delay", Q_NULLPTR));
        lblBuffers->setText(QApplication::translate("CClientDlgBase", "Buffers", Q_NULLPTR));
        lblInputLEDMeter->setText(QApplication::translate("CClientDlgBase", "Entrada", Q_NULLPTR));
        lblLevelMeterLeft->setText(QApplication::translate("CClientDlgBase", "L", Q_NULLPTR));
        lblLevelMeterRight->setText(QApplication::translate("CClientDlgBase", "R", Q_NULLPTR));
        chbPerfil->setText(QApplication::translate("CClientDlgBase", "Perfil", Q_NULLPTR));
        chbSettings->setText(QApplication::translate("CClientDlgBase", "Configuracion", Q_NULLPTR));
        chbChat->setText(QApplication::translate("CClientDlgBase", "Chat", Q_NULLPTR));
        Consola->setText(QApplication::translate("CClientDlgBase", "Analizador", Q_NULLPTR));
        chbLocalMute->setText(QApplication::translate("CClientDlgBase", "Mute Myself", Q_NULLPTR));
        butConnect->setText(QApplication::translate("CClientDlgBase", "Conectar ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CClientDlgBase: public Ui_CClientDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTDLGBASE_H
