/**************************
 * Author: Lachlan Sinclair
 * Date: 3/13/2019
 * Description: Implementation
 * file for the Point class.
 * ************************/


#include "Point.hpp"
#include <cmath>

/*****************************
 * Description: Default constructor
 * **************************/
Point::Point()
{
   setXCoord(0.0);
   setYCoord(0.0);
}
/*****************************
 * Description: Constructor with
 * with two double parameters that
 * get set to the coords.
 * **************************/
Point::Point(double xT, double yT)
{
   setXCoord(xT);
   setYCoord(yT);
}

void Point::setXCoord(double xT)
{
   x = xT;
}

void Point::setYCoord(double yT)
{
   y = yT;
}

double Point::getXCoord() const
{
   return x;
}

double Point::getYCoord() const
{
   return y;
}
/*****************************
 * Description: Returns the 
 * distance to two between two
 * points.
 * **************************/
double Point::distanceTo(const Point &obj)
{
   return sqrt(pow(this->getXCoord()-obj.getXCoord(),2.0)+pow
      (this->getYCoord()-obj.getYCoord(), 2.0));
} 




