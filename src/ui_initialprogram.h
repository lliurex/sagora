/********************************************************************************
** Form generated from reading UI file 'initialprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALPROGRAM_H
#define UI_INITIALPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_initialprogram
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *backgroundFrame;
    QPushButton *server;
    QPushButton *client;

    void setupUi(QWidget *initialprogram)
    {
        if (initialprogram->objectName().isEmpty())
            initialprogram->setObjectName(QStringLiteral("initialprogram"));
        initialprogram->resize(1024, 720);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(initialprogram->sizePolicy().hasHeightForWidth());
        initialprogram->setSizePolicy(sizePolicy);
        initialprogram->setBaseSize(QSize(1024, 720));
        initialprogram->setStyleSheet(QLatin1String(" border-image:  url(:/png/main/res/Fondoinicio.png);\n"
"                           "));
        verticalLayout = new QVBoxLayout(initialprogram);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        backgroundFrame = new QFrame(initialprogram);
        backgroundFrame->setObjectName(QStringLiteral("backgroundFrame"));
        backgroundFrame->setStyleSheet(QLatin1String(" border-image:  url(:/png/main/res/Fondoinicio.png);\n"
"                "));
        server = new QPushButton(backgroundFrame);
        server->setObjectName(QStringLiteral("server"));
        server->setGeometry(QRect(530, 520, 99, 97));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(server->sizePolicy().hasHeightForWidth());
        server->setSizePolicy(sizePolicy1);
        server->setToolTipDuration(-7);
        server->setLayoutDirection(Qt::LeftToRight);
        server->setStyleSheet(QLatin1String(" border-image:  url(:/png/main/res/botontransparente80x80.png);\n"
"                               \n"
"            \n"
"\n"
""));
        server->setIconSize(QSize(22, 16));
        client = new QPushButton(backgroundFrame);
        client->setObjectName(QStringLiteral("client"));
        client->setGeometry(QRect(390, 510, 99, 97));
        sizePolicy1.setHeightForWidth(client->sizePolicy().hasHeightForWidth());
        client->setSizePolicy(sizePolicy1);
        client->setStyleSheet(QLatin1String(" border-image:  url(:/png/main/res/botontransparente80x80.png);\n"
"                                 "));
        client->setIconSize(QSize(22, 16));

        verticalLayout->addWidget(backgroundFrame);


        retranslateUi(initialprogram);

        QMetaObject::connectSlotsByName(initialprogram);
    } // setupUi

    void retranslateUi(QWidget *initialprogram)
    {
        initialprogram->setWindowTitle(QApplication::translate("initialprogram", "SAGORA", Q_NULLPTR));
        server->setText(QString());
        client->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class initialprogram: public Ui_initialprogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALPROGRAM_H
