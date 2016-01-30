#include "gameoflife.h"

#include <QPainter>
#include <cassert>
#include <ship.h>

GameOfLife::GameOfLife(const QSize &size,int pixelPerCell, QObject *parent):Game(size, parent),_trackMove(false)
{

    initialize();
}


void GameOfLife::draw(QPainter &painter, QRect &rect)
{
    // Facteur permettant de prendre en compte la taille de
    // la fenêtre pour l'affichage rect = taille de la fenêtre
    // size() = taille du jeu
   double xFactor = (double)rect.width()/size().width();
    double yFactor = (double)rect.height()/size().height();
    painter.drawRect(rect);
   // painter.drawPixmap(exist.getShipPosition().dx(),exist.getShipPosition().dy(), Ship2DRender);

    painter.drawLine(exist.getShipPosition());

}
pair<int,int> GameOfLife::getCellIndexes(int x, int y) {

    return make_pair(1,1);
}
void GameOfLife::invertCell(int i, int j) {
}

void GameOfLife::mousePressed( int x, int y)
{


}

void GameOfLife::keyPressed( int key )
{
    if( key == Qt::Key_R) {
        pause();
        emit changed();
    }

    if(key == Qt::Key_Up)
    {

  auto shipPos = exist.getShipPosition();
  shipPos.translate(shipPos.dx(),shipPos.dy());
  shipPos.translated(shipPos.dx(),shipPos.dy());

  exist.getShipPosition().translate(0,10);
  exist.setShipPosition(exist.getShipPosition().translated(exist.getShipPosition().dx(),exist.getShipPosition().dy()));
  int b = 0;
      // exist.setShipPosition(exist.getShipPosition().translated(exist.getShipPosition().dx(),exist.getShipPosition.dy());
      // exist.setShipPosition(QLine());

    }
}

void GameOfLife::keyReleased( int /*key */)
{

}
int GameOfLife::countLivingNeighbors(int iCell, int jCell) {

    return 0;
}
void GameOfLife::step()
{
  emit changed();
}

void GameOfLife::initialize()
{
    Ship2DRender.load("/home/epsi/Desktop/test.png");
    exist.setShipPosition(QLine(QPoint(0,10),QPoint(20,30)));
}
void GameOfLife::createRandomPopulation()
{

}
void GameOfLife::mouseReleased( int /* x */, int /* y */) {
    // on arrête de suivre le mouvement de la souris
    _trackMove = false;
}

void GameOfLife::mouseMoved(int x, int y) {
    // la souris vient de se déplacer, on regarde
    // d'abord si on est en train de suivre les mouvements


}
