#ifndef EFFECTSDLG_H
#define EFFECTSDLG_H

#include <QDialog>
#include <QLabel>
#include <QString>
#include <QLineEdit>
#include <QPushButton>
#include <QProgressBar>
#include <QWhatsThis>
#include <QTimer>
#include <QSlider>
#include <QRadioButton>
#include <QMenuBar>
#include <QLayout>
#include <QButtonGroup>
#include "global.h"
#include "client.h"
#include "multicolorled.h"
#include "ui_efectosdlg.h"
#include "navegador.h"

/* Definitions ****************************************************************/
// update time for GUI controls
#define DISPLAY_UPDATE_TIME         1000 // ms

namespace Ui {
class effectsdlg;
}

/* Classes ********************************************************************/
class CClienteffectsdlg : public QDialog, private Ui_efectosdlg
{
    Q_OBJECT

public:
    CClienteffectsdlg ( CClient* pNCliP,
                         QWidget* parent = nullptr,
                         Qt::WindowFlags f = nullptr
            );





protected:

    CClient*     pClient;


 public slots:
    void OnTremoloStateChanged();
    void onTremDephSliderMoved(int value);
    void onTremRateSliderMoved(int value);

    void OnRingStateChanged();
    void onRingRateSliderMoved(int value);
    void onRingBlendSliderMoved(int value);

    void OnDelayStateChanged();
    void onDelayWetSliderMoved(int value);
    void onDelayDrySliderMoved(int value);
    void onDelayFeedbackSliderMoved(int value);


signals:
   // void GUIDesignChanged();
   // void DisplayChannelLevelsChanged();
   // void AudioChannelsChanged();
   // void NewClientLevelChanged();

private:
    Ui::effectsdlg *ui;
    Navegador *navegador;

};






#endif // EFFECTSDLG_H
