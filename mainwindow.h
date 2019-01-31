#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QStringList>
#include"weaponStats.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();

    void on_shikariRadBtn1_toggled(bool checked);
    void on_shikariRadBtn2_toggled(bool checked);
    void on_bushiRadBtn1_toggled(bool checked);
    void on_bushiRadBtn2_toggled(bool checked);
    void on_uhlanRadBtn1_toggled(bool checked);
    void on_uhlanRadBtn2_toggled(bool checked);
    void on_knightRadBtn1_toggled(bool checked);
    void on_knightRadBtn2_toggled(bool checked);
    void on_monkRadBtn1_toggled(bool checked);
    void on_monkRadBtn2_toggled(bool checked);
    void on_foeBreakerRadBtn1_toggled(bool checked);
    void on_foeBreakerRadBtn2_toggled(bool checked);
    void on_archerRadBtn1_toggled(bool checked);
    void on_archerRadBtn2_toggled(bool checked);
    void on_machinistRadBtn1_toggled(bool checked);
    void on_machinistRadBtn2_toggled(bool checked);
    void on_wMageRadBtn1_toggled(bool checked);
    void on_wMageRadBtn2_toggled(bool checked);
    void on_bMageRadBtn1_toggled(bool checked);
    void on_bMageRadBtn2_toggled(bool checked);
    void on_rMageRadBtn1_toggled(bool checked);
    void on_rMageRadBtn2_toggled(bool checked);
    void on_tMageRadBtn1_toggled(bool checked);
    void on_tMageRadBtn2_toggled(bool checked);
private:
    Ui::MainWindow *ui;
    WeaponStats m_Loadout1;
    WeaponStats m_Loadout2;
    QString firstClass;
    QString secondClass;
};




#endif // MAINWINDOW_H
