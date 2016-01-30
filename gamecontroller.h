#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include <QWidget>
class gameController
{
public:
    gameController();
    QPixmap ship2DTexture;
    explicit GameBoard(Game *game,QWidget *parent = 0);

signals:

public slots:


protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent ( QMouseEvent * event );
    void keyPressEvent ( QKeyEvent * event );
    void keyReleaseEvent ( QKeyEvent * event );
    void mouseMoveEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent * event);

private:
    Game *_game;
};

#endif // GAMECONTROLLER_H
