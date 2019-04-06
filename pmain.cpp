
#include "Point.hpp"
#include <iostream>
#include "LineSegment.hpp"

using namespace std;

int main(){

Point p(-4,5);

Point x(0,-3.0);

cout << p.distanceTo(x) << endl;

LineSegment a(&p, &x);
cout << &p << " " << a.getEnd1() << endl;


cout << a.slope()<<" "<< a.length() << endl;

Point p1(9, 0.0);
Point p2(0, 4.0);
cout << p1.distanceTo(p2) <<endl;
a.setEnd1(&p1);
cout << a.slope()<<" "<< a.length() << endl;

return 0;
}












