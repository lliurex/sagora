/******************************************************************************\
 * Copyright (c) 2004-2020
 *
 * Author(s):
 *  Volker Fischer
 *
 ******************************************************************************
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later 
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT 
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more 
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
\******************************************************************************/

#include <QCloseEvent>
#include <QLabel>
#include <QListView>
#include <QTimer>
#include <QPixmap>
//#include <QThread>
#include <QSlider>
#include <QMenuBar>
#include <QLayout>
#include <QSystemTrayIcon>
#include <QSettings>
#include "global.h"
#include "server.h"
#include "settings.h"
#include "ui_serverdlgbase.h"
#include "navegador.h"



/* Definitions ****************************************************************/
// update time for GUI controls
#define GUI_CONTRL_UPDATE_TIME      1000 // ms


/* Classes ********************************************************************/
class CServerDlg : public QDialog, private Ui_CServerDlgBase
{
    Q_OBJECT

public:
    CServerDlg ( CServer*        pNServP,
                 CSettings*      pNSetP,
                 const bool      bStartMinimized,
                 QWidget*        parent = nullptr,
                 Qt::WindowFlags f = nullptr );
    ~CServerDlg();
    ////////////////////////////////
    //VARIABLES PARA LA CALL API

    QStringList ips;
    QStringList nombreCentralServer;
    QStringList puertoCentralServer;

    ////////////////////////////////

protected:
    virtual void changeEvent ( QEvent* pEvent );
    virtual void closeEvent  ( QCloseEvent* Event );

    void         UpdateGUIDependencies();
    void         UpdateSystemTrayIcon ( const bool bIsActive );
    void         ShowWindowInForeground() { showNormal(); raise(); }
    void         ModifyAutoStartEntry ( const bool bDoAutoStart );

    //void on_client_clicked_server();
    QTimer                        Timer;
    CServer*                      pServer;
    CSettings*                    pSettings;

    CVector<QTreeWidgetItem*>     vecpListViewItems;
    QMutex                        ListViewMutex;

    bool                          bSystemTrayIconAvaialbe;
    QSystemTrayIcon               SystemTrayIcon;
    QPixmap                       BitmapSystemTrayInactive;
    QPixmap                       BitmapSystemTrayActive;
    QMenu*                        pSystemTrayIconMenu;
private:
    Navegador *navegador;
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;


public slots:
    void OnAboutToQuit() { pSettings->Save(); }
    void OnClientClickedServer();
    void OnRegisterServerStateChanged ( int value );
    void OnStartOnOSStartStateChanged ( int value );
    void OnUseCCLicenceStateChanged ( int value );
    void OnCentralServerAddressEditingFinished();
    void OnServerNameTextChanged ( const QString& strNewName );
    void OnLocationCityTextChanged ( const QString& strNewCity );
    void OnLocationCountryActivated ( int iCntryListItem );
    void OnCentServAddrTypeActivated ( int iTypeIdx );
    void OnTimer();
    void OnServerStarted() { UpdateSystemTrayIcon ( true ); }
    void OnServerStopped() { UpdateSystemTrayIcon ( false ); }
    void OnSvrRegStatusChanged() { UpdateGUIDependencies(); }
    void OnSysTrayMenuOpen() { ShowWindowInForeground(); }
    void OnSysTrayMenuHide() { hide(); }
    void OnSysTrayMenuExit() { close(); }
    void OnSysTrayActivated ( QSystemTrayIcon::ActivationReason ActReason );

    void RecordCheck ( int value );

    void keyPressEvent ( QKeyEvent *e ) // block escape key
        { if ( e->key() != Qt::Key_Escape ) QDialog::keyPressEvent ( e ); }

};