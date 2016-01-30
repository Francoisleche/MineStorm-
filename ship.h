#include <qline.h>

#ifndef SHIP_H
#define SHIP_H
using namespace std;
class ship
{
public:
    ship();
    double XPos;
    double YPos;
    void move(int Key);
    double getCurrentXPos();
    double getCurrentYPos();
    void setXPos(double x);
    void setYPos(double y);
    QLine getShipPosition() const;
    void setShipPosition( const QLine &value);
private:
     QLine ShipPosition;

};

#endif // SHIP_H
