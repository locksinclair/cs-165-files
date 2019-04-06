/*************************
 * Author: Lachlan Sinclair
 * Date: 3/13/2019
 * Description: Header file for
 * the Point clas.
 * **************************/

#ifndef POINT_HPP
#define POINT_HPP


class Point{

   private: 
      double x,y;


   public:
      Point();
      Point(double, double);

      void setXCoord(double);
      void setYCoord(double);
      double getXCoord() const;
      double getYCoord() const;
      
      double distanceTo(const Point &);
 
};
#endif

