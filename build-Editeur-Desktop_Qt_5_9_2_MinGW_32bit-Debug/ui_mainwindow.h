/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAjouter_un_tileset;
    QAction *actionAjouter_une_musique;
    QAction *actionEnregistrer;
    QAction *actionEnregistrer_sous;
    QAction *actionEnregistrer_et_quitter;
    QAction *actionQuitter;
    QAction *actionMenu;
    QAction *actionDock;
    QAction *actionCanvas;
    QAction *actionChanger_le_tile_actuel;
    QAction *actionChanger_le_tileset_actuel;
    QAction *actionChanger_la_musique_actuelle;
    QAction *actionSelectionner_un_tile;
    QAction *actionAjouter_une_collision;
    QAction *actionMusiques;
    QAction *actionQuitter_2;
    QWidget *centralWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *m_properties;
    QWidget *dockWidgetContents;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QMenu *menuQuitter;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(419, 308);
        actionAjouter_un_tileset = new QAction(MainWindow);
        actionAjouter_un_tileset->setObjectName(QStringLiteral("actionAjouter_un_tileset"));
        actionAjouter_une_musique = new QAction(MainWindow);
        actionAjouter_une_musique->setObjectName(QStringLiteral("actionAjouter_une_musique"));
        actionEnregistrer = new QAction(MainWindow);
        actionEnregistrer->setObjectName(QStringLiteral("actionEnregistrer"));
        actionEnregistrer_sous = new QAction(MainWindow);
        actionEnregistrer_sous->setObjectName(QStringLiteral("actionEnregistrer_sous"));
        actionEnregistrer_et_quitter = new QAction(MainWindow);
        actionEnregistrer_et_quitter->setObjectName(QStringLiteral("actionEnregistrer_et_quitter"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        actionMenu = new QAction(MainWindow);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));
        actionMenu->setCheckable(true);
        actionMenu->setChecked(true);
        actionDock = new QAction(MainWindow);
        actionDock->setObjectName(QStringLiteral("actionDock"));
        actionDock->setCheckable(true);
        actionDock->setChecked(true);
        actionCanvas = new QAction(MainWindow);
        actionCanvas->setObjectName(QStringLiteral("actionCanvas"));
        actionCanvas->setCheckable(true);
        actionCanvas->setChecked(true);
        actionChanger_le_tile_actuel = new QAction(MainWindow);
        actionChanger_le_tile_actuel->setObjectName(QStringLiteral("actionChanger_le_tile_actuel"));
        actionChanger_le_tileset_actuel = new QAction(MainWindow);
        actionChanger_le_tileset_actuel->setObjectName(QStringLiteral("actionChanger_le_tileset_actuel"));
        actionChanger_la_musique_actuelle = new QAction(MainWindow);
        actionChanger_la_musique_actuelle->setObjectName(QStringLiteral("actionChanger_la_musique_actuelle"));
        actionSelectionner_un_tile = new QAction(MainWindow);
        actionSelectionner_un_tile->setObjectName(QStringLiteral("actionSelectionner_un_tile"));
        actionAjouter_une_collision = new QAction(MainWindow);
        actionAjouter_une_collision->setObjectName(QStringLiteral("actionAjouter_une_collision"));
        actionMusiques = new QAction(MainWindow);
        actionMusiques->setObjectName(QStringLiteral("actionMusiques"));
        actionQuitter_2 = new QAction(MainWindow);
        actionQuitter_2->setObjectName(QStringLiteral("actionQuitter_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        m_properties = new QDockWidget(MainWindow);
        m_properties->setObjectName(QStringLiteral("m_properties"));
        m_properties->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        m_properties->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), m_properties);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 419, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QStringLiteral("menuEdition"));
        menuQuitter = new QMenu(menuBar);
        menuQuitter->setObjectName(QStringLiteral("menuQuitter"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuBar->addAction(menuQuitter->menuAction());
        menuFichier->addAction(actionAjouter_un_tileset);
        menuFichier->addAction(actionAjouter_une_musique);
        menuFichier->addSeparator();
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addAction(actionEnregistrer_sous);
        menuFichier->addSeparator();
        menuFichier->addAction(actionEnregistrer_et_quitter);
        menuFichier->addAction(actionQuitter);
        menuEdition->addAction(actionChanger_le_tile_actuel);
        menuEdition->addAction(actionChanger_le_tileset_actuel);
        menuEdition->addAction(actionChanger_la_musique_actuelle);
        menuEdition->addSeparator();
        menuEdition->addAction(actionSelectionner_un_tile);
        menuEdition->addSeparator();
        menuEdition->addAction(actionAjouter_une_collision);
        menuQuitter->addAction(actionQuitter_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionAjouter_un_tileset->setText(QApplication::translate("MainWindow", "Ajouter un tileset", Q_NULLPTR));
        actionAjouter_une_musique->setText(QApplication::translate("MainWindow", "Ajouter une musique", Q_NULLPTR));
        actionEnregistrer->setText(QApplication::translate("MainWindow", "Enregistrer", Q_NULLPTR));
        actionEnregistrer_sous->setText(QApplication::translate("MainWindow", "Enregistrer sous", Q_NULLPTR));
        actionEnregistrer_et_quitter->setText(QApplication::translate("MainWindow", "Enregistrer et quitter", Q_NULLPTR));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        actionMenu->setText(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
        actionDock->setText(QApplication::translate("MainWindow", "Propri\303\251t\303\251s", Q_NULLPTR));
        actionCanvas->setText(QApplication::translate("MainWindow", "Canvas", Q_NULLPTR));
        actionChanger_le_tile_actuel->setText(QApplication::translate("MainWindow", "Changer le tile actuel", Q_NULLPTR));
        actionChanger_le_tileset_actuel->setText(QApplication::translate("MainWindow", "Changer le tileset actuel", Q_NULLPTR));
        actionChanger_la_musique_actuelle->setText(QApplication::translate("MainWindow", "Changer la musique actuelle", Q_NULLPTR));
        actionSelectionner_un_tile->setText(QApplication::translate("MainWindow", "Selectionner un tile", Q_NULLPTR));
        actionAjouter_une_collision->setText(QApplication::translate("MainWindow", "Ajouter une collision", Q_NULLPTR));
        actionMusiques->setText(QApplication::translate("MainWindow", "Musiques", Q_NULLPTR));
        actionQuitter_2->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", Q_NULLPTR));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", Q_NULLPTR));
        menuQuitter->setTitle(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
