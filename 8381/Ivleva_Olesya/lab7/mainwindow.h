#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <facate.h>
//#include <field.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void set_disabled(bool flag);

private slots:
    void on_add_green_dr_clicked();

    void on_add_red_dr_clicked();

    void on_delete_item_clicked();

    void on_move_unit_clicked();

    void on_add_war_fight_clicked();

    void on_add_war_ronin_clicked();

    void on_add_sen_fire_clicked();

    void on_add_sen_lion_clicked();

    void on_bonus_clicked();

    void on_action_triggered();

    void on_attack_clicked();

    void on_action_2_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_action_5_triggered();

    void on_action_6_triggered();

    void on_action_7_triggered();

    void on_action_8_triggered();

    void on_action_9_triggered();

    void on_action_10_triggered();

    void on_action_11_triggered();

    void on_action_12_triggered();

private:
    Ui::MainWindow *ui;
    int flag;
    unsigned int f_game;
    unsigned int n = 5;
    unsigned int m = 5;
    Facade *facade;
    string logs = "";
    string print = "";

};

#endif // MAINWINDOW_H
