#include "efectosdlg.h"
#include "ui_efectosdlg.h"

#include <QDebug>


/* Implementation *************************************************************/
CClienteffectsdlg::CClienteffectsdlg ( CClient* pNCliP, QWidget* parent,
    Qt::WindowFlags f ) : QDialog ( parent, f ), pClient ( pNCliP ),

    navegador(new Navegador) {
    setupUi(this);
    navegador->render(this);


    //TREMOLO SLOTS
    QObject::connect(chbTremolo, SIGNAL(clicked()),
                     this, SLOT(OnTremoloStateChanged()));

    QObject::connect(SldrTremDeph, SIGNAL(valueChanged(int)),
                     this, SLOT(onTremDephSliderMoved(int)));

    QObject::connect(SldrTremRate, SIGNAL(valueChanged(int)),
                     this, SLOT(onTremRateSliderMoved(int)));


    //RING SLOTS
    QObject::connect(chbRing, SIGNAL(clicked()),
                     this, SLOT(OnRingStateChanged()));

    QObject::connect(SldrRingBlend, SIGNAL(valueChanged(int)),
                     this, SLOT(onRingBlendSliderMoved(int)));

    QObject::connect(SldrRingRate, SIGNAL(valueChanged(int)),
                     this, SLOT(onRingRateSliderMoved(int)));



    //DELYA SLOTS
    QObject::connect(chbDelay, SIGNAL(clicked()),
                     this, SLOT(OnDelayStateChanged()));

    QObject::connect(SldrDelayWet, SIGNAL(valueChanged(int)),
                     this, SLOT(onDelayWetSliderMoved(int)));

    QObject::connect(SldrDelayDry, SIGNAL(valueChanged(int)),
                     this, SLOT(onDelayDrySliderMoved(int)));

    QObject::connect(SldrDelayFeedback, SIGNAL(valueChanged(int)),
                     this, SLOT(onDelayFeedbackSliderMoved(int)));



}
/////////////////////////////////////////////////////////////
void CClienteffectsdlg::OnTremoloStateChanged() {

    int value = chbTremolo->checkState();

    if (value == Qt::Checked) {
        pClient->TremoloActivate = true;
    } else {
        pClient->TremoloActivate = false;
    }
}

void CClienteffectsdlg::onTremDephSliderMoved(int value) {

    //qDebug() << "depth: " << value;
    pClient->TremoloDepth = value;

}

void CClienteffectsdlg::onTremRateSliderMoved(int value) {

    //qDebug() << "rate: " << value;
    pClient->TremoloRate = value;

}


/////////////////////////////////////////////////////////////
void CClienteffectsdlg::OnRingStateChanged() {

    int value = chbRing->checkState();

    if (value == Qt::Checked) {
        pClient->RingActivate = true;
    } else {
        pClient->RingActivate = false;
    }
}

void CClienteffectsdlg::onRingRateSliderMoved(int value) {

    //qDebug() << "depth: " << value;
    pClient->RingRate = value;

}

void CClienteffectsdlg::onRingBlendSliderMoved(int value) {

    //qDebug() << "rate: " << value;
    pClient->RingBlend = value;

}

/////////////////////////////////////////////////////////////
void CClienteffectsdlg::OnDelayStateChanged() {

    int value = chbDelay->checkState();

    if (value == Qt::Checked) {
        pClient->DelayActivate = true;
    } else {
        pClient->DelayActivate = false;
    }
}

void CClienteffectsdlg::onDelayWetSliderMoved(int value) {

    //qDebug() << "rate: " << value;
    pClient->DelayWet = value;

}

void CClienteffectsdlg::onDelayDrySliderMoved(int value) {

    //qDebug() << "rate: " << value;
    pClient->DelayDry = value;

}

void CClienteffectsdlg::onDelayFeedbackSliderMoved(int value) {

    //qDebug() << "rate: " << value;
    pClient->DelayFeedback = value;

}
