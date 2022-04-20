#ifndef DESCARGASDLG_H
#define DESCARGASDLG_H

#include <QDialog>
#include "ui_descargasdlg.h"
#include "navegador.h"

namespace Ui {
class descargasdlg;
}

class descargasdlg : public QDialog, private Ui_descargasdlg
{
    Q_OBJECT

public:
    descargasdlg (       QWidget* parent = nullptr,
                         Qt::WindowFlags f = nullptr
            );

private:
    Ui::descargasdlg *ui;
    Navegador *navegador;
};

#endif // DESCARGASDLG_H
