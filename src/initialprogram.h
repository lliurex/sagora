#ifndef INITIALPROGRAM_H
#define INITIALPROGRAM_H

#include <QWidget>
#include <QLayout>
#include <QMenuBar>
#include <QTimer>
#include "navegador.h"
#include <QtNetwork>
#include <QtCore>
#include "descargasdlg.h"


namespace Ui {
class initialprogram;
}

class initialprogram : public QWidget
{
    Q_OBJECT

public:
    explicit initialprogram(QWidget *parent = nullptr);
    ~initialprogram();

    void append(const QUrl &url);
    //void append(const QStringList &urls);
    static QString saveFileName(const QUrl &url);


public slots:
    void receiveFromQml();

private slots:
    void on_client_clicked();
    void on_server_clicked();
    void startNextDownload();
    void downloadReadyRead();
    void onfinish(QNetworkReply *rep);
    void on_botonlogo_clicked();

private:
    Ui::initialprogram *ui;
    QMenu*             pViewMenu;
    QMenuBar*          pMenu;
    QApplication *pApp;
    Navegador *navegador;

    ///////////////////////////////////////////
    QNetworkAccessManager manager;
    QQueue<QUrl> downloadQueue;
    QNetworkReply *currentDownload = nullptr;
    QFile output;
    QElapsedTimer downloadTimer;

    int downloadedCount = 0;
    int totalCount = 0;
    ///////////////////////////////////////////

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;


protected:
    descargasdlg descargas;

};

#endif // INITIALPROGRAM_H
