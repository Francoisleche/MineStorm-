#include "ship.h"

using namespace std;
ship::ship()
{
   this->XPos= 150;
   this->YPos= 150;
}
void ship::move(int Key)
{
    XPos +=10;
}
double ship::getCurrentYPos()
{
  return YPos;
}
double ship::getCurrentXPos()
{
  return XPos;
}


void ship::setXPos(double x)
{
XPos++;
}
void ship::setYPos(double Y)
{
 YPos++;
}

QLine ship::getShipPosition() const
{
    return ShipPosition;
}
void ship::setShipPosition( const QLine &val)
{
    ShipPosition =val;
}

