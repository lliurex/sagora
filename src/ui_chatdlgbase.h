/********************************************************************************
** Form generated from reading UI file 'chatdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDLGBASE_H
#define UI_CHATDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CChatDlgBase
{
public:
    QVBoxLayout *vboxLayout;
    QTextBrowser *txvChatWindow;
    QLineEdit *edtLocalInputText;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *butClear;
    QPushButton *buttonClose;

    void setupUi(QDialog *CChatDlgBase)
    {
        if (CChatDlgBase->objectName().isEmpty())
            CChatDlgBase->setObjectName(QStringLiteral("CChatDlgBase"));
        CChatDlgBase->resize(435, 405);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CChatDlgBase->sizePolicy().hasHeightForWidth());
        CChatDlgBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/png/main/res/fronticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CChatDlgBase->setWindowIcon(icon);
        CChatDlgBase->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        CChatDlgBase->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(CChatDlgBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        txvChatWindow = new QTextBrowser(CChatDlgBase);
        txvChatWindow->setObjectName(QStringLiteral("txvChatWindow"));
        txvChatWindow->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
" border-image:  url(:/png/main/res/fondoo.png);"));
        txvChatWindow->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        vboxLayout->addWidget(txvChatWindow);

        edtLocalInputText = new QLineEdit(CChatDlgBase);
        edtLocalInputText->setObjectName(QStringLiteral("edtLocalInputText"));
        edtLocalInputText->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));

        vboxLayout->addWidget(edtLocalInputText);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(181, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        butClear = new QPushButton(CChatDlgBase);
        butClear->setObjectName(QStringLiteral("butClear"));
        butClear->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        butClear->setAutoDefault(false);

        hboxLayout->addWidget(butClear);

        buttonClose = new QPushButton(CChatDlgBase);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));
        buttonClose->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        buttonClose->setAutoDefault(false);

        hboxLayout->addWidget(buttonClose);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(edtLocalInputText, txvChatWindow);
        QWidget::setTabOrder(txvChatWindow, butClear);
        QWidget::setTabOrder(butClear, buttonClose);

        retranslateUi(CChatDlgBase);
        QObject::connect(buttonClose, SIGNAL(clicked()), CChatDlgBase, SLOT(accept()));

        buttonClose->setDefault(false);


        QMetaObject::connectSlotsByName(CChatDlgBase);
    } // setupUi

    void retranslateUi(QDialog *CChatDlgBase)
    {
        CChatDlgBase->setWindowTitle(QApplication::translate("CChatDlgBase", "Chat", Q_NULLPTR));
        butClear->setText(QApplication::translate("CChatDlgBase", "Cl&ear", Q_NULLPTR));
        buttonClose->setText(QApplication::translate("CChatDlgBase", "&Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CChatDlgBase: public Ui_CChatDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDLGBASE_H
