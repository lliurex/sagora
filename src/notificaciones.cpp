#include <QNetworkReply>
#include "notificaciones.h"
#include "ui_notificaciones.h"
#include "navegador.h"

notificaciones::notificaciones(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::notificaciones),
    navegador(new Navegador)
{
    ui->setupUi(this);

    // Setea y renderiza los botones de navegacion
    // formatea la ventana
    navegador->render(this);



    ///////////////////////////////////////////////////////////////////////
    QNetworkAccessManager * mgr = new QNetworkAccessManager(this);
    connect(mgr,SIGNAL(finished(QNetworkReply*)),this,SLOT(ventanaNotificaciones(QNetworkReply*)));
    connect(mgr,SIGNAL(finished(QNetworkReply*)),mgr,SLOT(deleteLater()));
    mgr->get(QNetworkRequest(QUrl("https://www.sagora.org/notificaciones-new.html")));
    ///////////////////////////////////////////////////////////////////////

}

notificaciones::~notificaciones()
{
    delete ui;
}
///////////////////////////////////////////////////////////////////////////////
void notificaciones::ventanaNotificaciones(QNetworkReply *rep)
{
    QByteArray bts = rep->readAll();
    QString str(bts);

    ui->textBrowser->setText(str);

    //QMessageBox messageBox(this);
    //messageBox.setText(str);

    //messageBox.setStyleSheet("QMessageBox { background-color: black }");
    //messageBox.setIconPixmap(QPixmap(":/png/main/res/ui/logo.png"));
    //messageBox.exec();

}
