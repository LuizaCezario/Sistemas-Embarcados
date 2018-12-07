#include "mainwindow.h"
#include <QApplication>
#include <qapplication.h>
#include <qfile.h>
#include <qtextstream.h>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    const char* nome = argv[1];
    w.passa(nome);
    return a.exec();
}
