 #include "mainwindow.h"
//#include "dummygame.h"
#include "gameoflife.h"
#include <QSize>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //DummyGame game(QSize(400,400));
    GameOfLife game(QSize(600,600),1);
    MainWindow w(&game);
    return a.exec();
}
