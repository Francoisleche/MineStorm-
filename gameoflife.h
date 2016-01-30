#ifndef GAMEOFLIFE_H
#define GAMEOFLIFE_H

#include "game.h"
#include "ship.h"

#include <QColor>

#include <vector>
#include <map>
#include <qpixmap.h>

using namespace std;

class GameOfLife : public Game
{
public:
    GameOfLife(const QSize &size,int pixelPerCell, QObject *parent = nullptr);
    virtual void draw(QPainter &painter, QRect &size);
    virtual void mousePressed( int x, int y);
    virtual void keyPressed( int key );
    virtual void keyReleased( int key );
    virtual void mouseReleased( int x, int y);
    virtual void mouseMoved(int x, int y);


protected:
    virtual void step() ;
    virtual void initialize();
private:
    QPixmap Ship2DRender;
    ship exist;
    void createRandomPopulation();
    int countLivingNeighbors(int i, int j);
    /**
     * @brief getCellIndexes retourne les coordonnées d'une cellule à
     * partir d'une position x,y dans le jeu
     * @param x
     * @param y
     * @return une paire contenant i,j
     */
    pair<int,int> getCellIndexes(int x, int y);
    /**
     * @brief invertCell inverse l'état de la cellule (i,j)
     * @param i
     * @param j
     */
    void invertCell(int i, int j);
    enum CellType {
        None,
        Born,
        Alive,
        Dead
    };
    vector<vector<CellType>> _cells;
    typedef map<CellType,QColor> ColorMap;
    ColorMap _colors;
    int _pixelPerCell;
    /**
     * @brief _trackMove est vrai quand le bouton de la souris est
     * enfoncé. Il passe à faux quand on le relache
     */
    bool _trackMove;
    /**
     * @brief _currentCell contient la dernière cellule qui a été survolée
     * avec la souris
     */
    pair<int,int> _currentCell;

};

#endif // GAMEOFLIFE_H
