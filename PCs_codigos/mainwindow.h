#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "comanda.h"
using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

void passa(const char* A);

private slots:
    void on_pushButton_3_clicked();

    void on_Botao1_clicked();

    void on_Botao2_clicked();

    void on_Botao3_clicked();

    void on_Botao4_clicked();

    void on_Botao5_clicked();

    void on_Botao6_clicked();

    void on_Botao7_clicked();

    void on_Botao8_clicked();

    void on_Botao9_clicked();

    void on_Botao10_clicked();

    void on_Botao11_clicked();

    void on_Botao12_clicked();

    void on_Botao13_clicked();

    void on_Botao14_clicked();

    void on_Botao15_clicked();

    void on_Botao16_clicked();

    void on_Botao17_clicked();

    void on_Botao18_clicked();

    void on_Botao19_clicked();

    void on_Botao20_clicked();

    void on_BotaoFinal_clicked();

    void on_verticalScrollBar_sliderReleased();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    comanda *janela;
};

#endif // MAINWINDOW_H
