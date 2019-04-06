/***************************
 * Author: Lachlan Sincalir
 * Date: 3/13/2019
 * Description: Implmentation
 * file for the LineSegment
 * class.
 * ***********************/

#include "LineSegment.hpp"

void LineSegment::setEnd1(Point *obj)
{
   end1 = obj;
}

void LineSegment::setEnd2(Point *obj)
{
   end2 = obj;
}

Point* LineSegment::getEnd1()
{
   return end1;
}

Point* LineSegment::getEnd2()
{
   return end2;
}
/*************************
 * Description: Returns the
 * length between the two
 * ends.
 * **********************/
double LineSegment::length()
{
   return end1->distanceTo(*end2);
}
/*************************
 * Description: Returns the 
 * slope of the linesegment.
 * **********************/
double LineSegment::slope()
{
   return (end1->getYCoord()-end2->getYCoord())/
      (end1->getXCoord()-end2->getXCoord());
}
/*************************
 * Description: Constructor that
 * takes two refrences to Point objs
 * assigns them to the end pointers.
 * **********************/
LineSegment::LineSegment(Point *obj1, Point *obj2)
{
   end1 = obj1;
   end2 = obj2;
}

