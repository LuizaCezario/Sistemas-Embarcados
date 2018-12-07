#include <iostream>
#include <fstream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qapplication.h>
#include <qfile.h>
#include <qtextstream.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "comanda.h"
#include <QTextStream>
#include <QMessageBox>

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

const char* a;

void MainWindow:: passa(const char* A)
{
    a = A;
}

void MainWindow::on_pushButton_3_clicked()
{

}

void MainWindow::on_Botao1_clicked()
{
    int i;
    float tot, total;
    i = ui->quant1->text().toInt(NULL);
    ui->quant1->setText(QString("%1").arg(i+1));
    tot = (i+1)*8.00;
     ui->tot1->setText(QString("R$ %1").arg(tot));
     total = ui->Total->text().toFloat(NULL);
     ui->Total->setText(QString("%1").arg(total+8));

}

void MainWindow::on_Botao2_clicked()
{
    int i;
    float tot, total;
    i = ui->quant2->text().toInt(NULL);
    ui->quant2->setText(QString("%1").arg(i+1));
    tot = (i+1)*5.00;
    ui->tot2->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total+5));

}

void MainWindow::on_Botao3_clicked()
{
    int i;
    float tot, total;
    i = ui->quant3->text().toInt(NULL);
    ui->quant3->setText(QString("%1").arg(i+1));
    tot = (i+1)*30.00;
    ui->tot3->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total+30));
}

void MainWindow::on_Botao4_clicked()
{
    int i;
    float tot, total;
    i = ui->quant4->text().toInt(NULL);
    ui->quant4->setText(QString("%1").arg(i+1));
    tot = (i+1)*5.00;
    ui->tot4->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total+5));
}

void MainWindow::on_Botao5_clicked()
{
    int i;
    float tot, total;
    i = ui->quant5->text().toInt(NULL);
    ui->quant5->setText(QString("%1").arg(i+1));
    tot = (i+1)*5.50;
    ui->tot5->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total+5.5));
}

void MainWindow::on_Botao6_clicked()
{
    int i;
    float tot, total;
    i = ui->quant6->text().toInt(NULL);
    ui->quant6->setText(QString("%1").arg(i+1));
    tot = (i+1)*7.00;
    ui->tot6->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total+7));
}

void MainWindow::on_Botao7_clicked()
{
    int i;
    float tot, total;
    i = ui->quant7->text().toInt(NULL);
    ui->quant7->setText(QString("%1").arg(i+1));
    tot = (i+1)*7.00;
    ui->tot7->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total+7));
}

void MainWindow::on_Botao8_clicked()
{
    int i;
    float tot, total;
    i = ui->quant8->text().toInt(NULL);
    ui->quant8->setText(QString("%1").arg(i+1));
    tot = (i+1)*5.00;
    ui->tot8->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total+5));
}

void MainWindow::on_Botao9_clicked()
{
    int i;
    float tot, total;
    i = ui->quant9->text().toInt(NULL);
    ui->quant9->setText(QString("%1").arg(i+1));
    tot = (i+1)*10.00;
    ui->tot9->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total+10));
}

void MainWindow::on_Botao10_clicked()
{
    int i;
    float tot, total;
    i = ui->quant10->text().toInt(NULL);
    ui->quant10->setText(QString("%1").arg(i+1));
    tot = (i+1)*5.00;
    ui->tot10->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total+5));
}

void MainWindow::on_Botao11_clicked()
{
    int i;
    float tot, total;
    i = ui->quant1->text().toInt(NULL);
    ui->quant1->setText(QString("%1").arg(i-1));
    tot = (i-1)*8.00;
     ui->tot1->setText(QString("R$ %1").arg(tot));
     total = ui->Total->text().toFloat(NULL);
     ui->Total->setText(QString("%1").arg(total-8));
}

void MainWindow::on_Botao12_clicked()
{
    int i;
    float tot, total;
    i = ui->quant2->text().toInt(NULL);
    ui->quant2->setText(QString("%1").arg(i-1));
    tot = (i-1)*5.00;
    ui->tot2->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total-5));
}

void MainWindow::on_Botao13_clicked()
{
    int i;
    float tot, total;
    i = ui->quant3->text().toInt(NULL);
    ui->quant3->setText(QString("%1").arg(i-1));
    tot = (i-1)*30.00;
    ui->tot3->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total-30));
}

void MainWindow::on_Botao14_clicked()
{
    int i;
    float tot, total;
    i = ui->quant4->text().toInt(NULL);
    ui->quant4->setText(QString("%1").arg(i-1));
    tot = (i-1)*5.00;
    ui->tot4->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total-5));
}

void MainWindow::on_Botao15_clicked()
{
    int i;
    float tot, total;
    i = ui->quant5->text().toInt(NULL);
    ui->quant5->setText(QString("%1").arg(i-1));
    tot = (i-1)*5.50;
    ui->tot5->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total-5.5));
}

void MainWindow::on_Botao16_clicked()
{
    int i;
    float tot, total;
    i = ui->quant6->text().toInt(NULL);
    ui->quant6->setText(QString("%1").arg(i-1));
    tot = (i-1)*7.00;
    ui->tot6->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total-7));
}

void MainWindow::on_Botao17_clicked()
{
    int i;
    float tot, total;
    i = ui->quant7->text().toInt(NULL);
    ui->quant7->setText(QString("%1").arg(i-1));
    tot = (i-1)*7.00;
    ui->tot7->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total-7));
}

void MainWindow::on_Botao18_clicked()
{
    int i;
    float tot, total;
    i = ui->quant8->text().toInt(NULL);
    ui->quant8->setText(QString("%1").arg(i-1));
    tot = (i-1)*5.00;
    ui->tot8->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total-5));
}

void MainWindow::on_Botao19_clicked()
{
    int i;
    float tot, total;
    i = ui->quant9->text().toInt(NULL);
    ui->quant9->setText(QString("%1").arg(i-1));
    tot = (i-1)*10.00;
    ui->tot9->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total-10));
}

void MainWindow::on_Botao20_clicked()
{
    int i;
    float tot, total;
    i = ui->quant10->text().toInt(NULL);
    ui->quant10->setText(QString("%1").arg(i-1));
    tot = (i-1)*5.00;
    ui->tot10->setText(QString("R$ %1").arg(tot));
    total = ui->Total->text().toFloat(NULL);
    ui->Total->setText(QString("%1").arg(total-5));
}

void escrevearquivo(QString label, QString quant, QString preco, FILE *arq)
{
    string nome, quantidade, preco1;
    nome = label.toStdString();
    quantidade = quant.toStdString();
    preco1 =preco.toStdString();
    fprintf(arq, "%s %s %s\n", nome.c_str(), quantidade.c_str(), preco1.c_str());

}


void MainWindow::on_BotaoFinal_clicked()
{
    FILE *arq;

    arq = fopen(a, "a+");

    if (arq == NULL)
    {
        printf("Problemas na CRIACAO do arquivo\n");
        return;
    }
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    num1 = ui->quant1->text().toInt(NULL);
    num2 = ui->quant2->text().toInt(NULL);
    num3 = ui->quant3->text().toInt(NULL);
    num4 = ui->quant4->text().toInt(NULL);
    num5 = ui->quant5->text().toInt(NULL);
    num6 = ui->quant6->text().toInt(NULL);
    num7 = ui->quant7->text().toInt(NULL);
    num8 = ui->quant8->text().toInt(NULL);
    num9 = ui->quant9->text().toInt(NULL);
    num10 = ui->quant10->text().toInt(NULL);
    if(num1 > 0)
    {
    escrevearquivo(ui->label1->text(), ui->quant1->text(), ui->tot1->text(), arq);
    }
    if(num2 > 0)
    {
    escrevearquivo(ui->label2->text(), ui->quant2->text(), ui->tot2->text(), arq);
    }
    if(num3 > 0)
    {
    escrevearquivo(ui->label3->text(), ui->quant3->text(), ui->tot3->text(), arq);
    }
    if(num4 > 0)
    {
    escrevearquivo(ui->label4->text(), ui->quant4->text(), ui->tot4->text(), arq);
    }
    if(num5 > 0)
    {
    escrevearquivo(ui->label5->text(), ui->quant5->text(), ui->tot5->text(), arq);
    }
    if(num6 > 0)
    {
    escrevearquivo(ui->label6->text(), ui->quant6->text(), ui->tot6->text(), arq);
    }
    if(num7 > 0)
    {
    escrevearquivo(ui->label7->text(), ui->quant7->text(), ui->tot7->text(), arq);
    }
    if(num8 > 0)
    {
    escrevearquivo(ui->label8->text(), ui->quant8->text(), ui->tot8->text(), arq);
    }
    if(num9 > 0)
    {
    escrevearquivo(ui->label9->text(), ui->quant9->text(), ui->tot9->text(), arq);
    }
    if(num10 > 0)
    {
    escrevearquivo(ui->label10->text(), ui->quant10->text(), ui->tot10->text(), arq);
    }
    fclose(arq);
    on_pushButton_clicked();
    exit(0);
}


void MainWindow::on_verticalScrollBar_sliderReleased()
{

}

void MainWindow::on_pushButton_clicked()
{
       QString nome = a;
       janela = new comanda(this);
       janela->show();
       QFile arquivo(a);
       if(!arquivo.open(QFile::ReadOnly|QFile::Text))
       {
           printf("Erro na abertura do arquivo");
       }

       QTextStream entrada(&arquivo);
       QString texto = entrada.readAll();
       janela->escrevertela(texto);

}


