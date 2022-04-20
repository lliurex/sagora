#ifndef NOTIFICACIONES_H
#define NOTIFICACIONES_H

#include <QDialog>
#include <QWidget>
#include <QLayout>
#include <QMenuBar>
#include <QTimer>
#include "navegador.h"
#include <QtNetwork>
#include <QtCore>

namespace Ui {
class notificaciones;
}

class notificaciones : public QDialog
{
    Q_OBJECT

public:
    explicit notificaciones(QWidget *parent = nullptr);
    ~notificaciones();

private slots:
    void ventanaNotificaciones(QNetworkReply *rep);

private:
    Ui::notificaciones *ui;
    QMenu*             pViewMenu;
    QMenuBar*          pMenu;
    QApplication *pApp;
    Navegador *navegador;
};

#endif // NOTIFICACIONES_H
