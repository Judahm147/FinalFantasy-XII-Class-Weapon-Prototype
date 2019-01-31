#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);






}




MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QStringList elements;
    QStringList statuses;
    ui->elementsTxtBrowser->clear();
    ui->statusesTxtBrowser->clear();
    elements << m_Loadout1.getElements() << m_Loadout2.getElements();
    elements.removeDuplicates();
    statuses << m_Loadout1.getStatuses() << m_Loadout2.getStatuses();
    statuses.removeDuplicates();

    ui->elementsTxtBrowser->setText(elements.join(" - "));

    ui->statusesTxtBrowser->setText(statuses.join(" - "));

}

void MainWindow::on_shikariRadBtn1_toggled(bool checked)
{
    ui->shikariRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("Shikari");
}

void MainWindow::on_shikariRadBtn2_toggled(bool checked)
{
    ui->shikariRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout2 = WeaponStats(elements, statuses);
    secondClass = QString("Shikari");
}

void MainWindow::on_bushiRadBtn1_toggled(bool checked)
{
    ui->bushiRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("Bushi");
}

void MainWindow::on_bushiRadBtn2_toggled(bool checked)
{
    ui->bushiRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    secondClass = QString("Bushi");
}

void MainWindow::on_uhlanRadBtn1_toggled(bool checked)
{
    ui->uhlanRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("Uhlan");
}

void MainWindow::on_uhlanRadBtn2_toggled(bool checked)
{
    ui->uhlanRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    secondClass = QString("Uhlan");
}


void MainWindow::on_knightRadBtn1_toggled(bool checked)
{
    ui->knightRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("Knight");
}

void MainWindow::on_knightRadBtn2_toggled(bool checked)
{
    ui->knightRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    secondClass = QString("Knight");
}

void MainWindow::on_monkRadBtn1_toggled(bool checked)
{
    ui->monkRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("Monk");
}

void MainWindow::on_monkRadBtn2_toggled(bool checked)
{
    ui->monkRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    secondClass = QString("Monk");
}

void MainWindow::on_foeBreakerRadBtn1_toggled(bool checked)
{
    ui->foeBreakerRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("Foe Breaker");
}

void MainWindow::on_foeBreakerRadBtn2_toggled(bool checked)
{
    ui->foeBreakerRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    secondClass = QString("Foe Breaker");
}

void MainWindow::on_archerRadBtn1_toggled(bool checked)
{
    ui->archerRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("Archer");
}

void MainWindow::on_archerRadBtn2_toggled(bool checked)
{
    ui->archerRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    secondClass = QString("Archer");
}

void MainWindow::on_machinistRadBtn1_toggled(bool checked)
{
    ui->machinistRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("Machinist");
}

void MainWindow::on_machinistRadBtn2_toggled(bool checked)
{
    ui->machinistRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    secondClass = QString("Machinist");
}

void MainWindow::on_wMageRadBtn1_toggled(bool checked)
{
    ui->wMageRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("White Mage");
}

void MainWindow::on_wMageRadBtn2_toggled(bool checked)
{
    ui->wMageRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    secondClass = QString("White Mage");
}

void MainWindow::on_bMageRadBtn1_toggled(bool checked)
{
    ui->bMageRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("Black Mage");
}

void MainWindow::on_bMageRadBtn2_toggled(bool checked)
{
    ui->bMageRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    secondClass = QString("Black Mage");
}

void MainWindow::on_rMageRadBtn1_toggled(bool checked)
{
    ui->rMageRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("Red Mage");
}

void MainWindow::on_rMageRadBtn2_toggled(bool checked)
{
    ui->rMageRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    secondClass = QString("Red Mage");
}

void MainWindow::on_tMageRadBtn1_toggled(bool checked)
{
    ui->tMageRadBtn2->setDisabled(checked);
    m_Loadout1.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    firstClass = QString("Time Mage");
}

void MainWindow::on_tMageRadBtn2_toggled(bool checked)
{
    ui->tMageRadBtn1->setDisabled(checked);
    m_Loadout2.clear();
    QStringList elements;
    elements << "Dark" << "Wind" << "Earth" << "Water";
    QStringList statuses;
    statuses << "Silence" << "Disable" << "Poison" << "Blind"
                          << "KO" << "Sap" << "Berserk" << "Slow" << "Immobilize"
                          << "Doom";
    m_Loadout1 = WeaponStats(elements, statuses);
    secondClass = QString("Time Mage");
}
