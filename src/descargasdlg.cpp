#include "descargasdlg.h"
#include "ui_descargasdlg.h"

descargasdlg::descargasdlg ( QWidget* parent,
    Qt::WindowFlags f ) : QDialog ( parent, f ),

    navegador(new Navegador) {
    setupUi(this);
    navegador->render(this);

    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint| Qt::Dialog);
}


