/**************************
 * Author: Lachlan Sinclair
 * Date: 3/13/2019
 * Description: Header file
 * for the LineSegment class.
 * I assume the user will 
 * maintain the lifetime of objects
 * of this class properly in regards
 * to the points obj's it points to.
 * *********************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"


class LineSegment{

   private:
      Point *end1;
      Point *end2;

   public:

      LineSegment(Point *, Point *);
      void setEnd1(Point *);
      void setEnd2(Point *);
      Point* getEnd1();
      Point* getEnd2();
  
      double length();
      double slope();
     

};

#endif
