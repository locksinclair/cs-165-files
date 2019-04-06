

#include "SBoard.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(){
   string x = "test.txt";
   SBoard b;
   b.readPlacementsFromFile(x);
   /*cout << b.placeToken(0,0)<<endl;
   cout << b.placeToken(9,0)<<endl;
   cout << b.placeToken(0,9)<<endl;
   cout << b.placeToken(9,9) << endl;
   
   cout << b.getNumTokens() << endl;
   cout << "//////////////" <<endl;

   cout << b.placeToken(-1,1) << endl;
   cout << b.placeToken(1,-1) << endl;
   cout << b.placeToken(0,0) << endl;
   cout << b.placeToken(0,10) << endl;
   cout << b.placeToken(10,0) << endl;
   b.placeToken(0,4); 
   b.placeToken(4,0); 
   b.placeToken(8,4); 
   b.placeToken(4,8);
   b.placeToken(8,8); 
   b.placeToken(0,8);
   b.placeToken(8,0);*/
   cout << b.placeToken(0,0) <<" "<< b.getNumTokens() <<endl;


return 0;
}










