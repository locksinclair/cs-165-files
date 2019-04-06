/****************************
 * Author: Lachlan Sinclair
 * Date: 3/13/2019
 * Description: Header file 
 * for the SBoard class.
 * *************************/

#ifndef SBOARD_HPP
#define SBOARD_HPP
#include <string>

class SBoard{

   private:
      char board[10][10];
      int tokens;
      //private methods used 
      //to find the squares made
      //in quadrants, i.e. upper left
      int Squares(int, int);
      int ul(int, int, int);
      int ur(int, int, int);
      int ll(int, int, int);
      int lr(int, int, int);

   public:
      SBoard();
      int getNumTokens();
      int placeToken(int, int);
      void readPlacementsFromFile(std::string);
      void readPlacementsFromFile(const char *);
};
#endif
