/***************************
 * Author: Lachlan Sinclair
 * Date: 3/13/2019
 * Decription: SBoard 2D 
 * array class.
 * *************************/

#include <fstream>
#include "SBoard.hpp"
#include <string>

/*****************************
 *Description: Default constructor
******************************/
SBoard::SBoard()
{
   tokens = 0;
   for (int i=0; i<10; i++)
   {
      for (int j=0; j<10; j++)
      {
         board[i][j] = '.';
      }
   }
}

/*****************************
 *Description: Reads input from
 *the file, then closes the file.
******************************/
void SBoard::readPlacementsFromFile(std::string file)
{
   int temp1, temp2;
   std::ifstream input;
   input.open(file);
   if(input)
   {
      while(!input.eof())
      {
         input >> temp1;
         input >> temp2;
         this->placeToken(temp1, temp2);
      }
      input.close();
   }
}
/*****************************
 *Description: Converts a cstring
 *to a regular string, the calls the 
 *main function
******************************/
void SBoard::readPlacementsFromFile(const char *sValue)
{
   std::string value = sValue;
   readPlacementsFromFile(value);
}

int SBoard::getNumTokens()
{
   return tokens;
}
/*****************************
 *Description: Place a token in 
 *the array at the provided spot
******************************/
int SBoard::placeToken(int row, int col)
{
   if(board[row][col]!='.' || row <0 || col<0
      || row>9 || col>9)
   {
      return -1;
   }
   
   board[row][col]='x';
   tokens++;
   return Squares(row, col);   
}
/*****************************
 *Description: Internal method
 *used to track squares made
******************************/
int SBoard::Squares(int row, int col)
{
   int numSquares = 0;
   for (int i=1; i<10;i++)
   {
      numSquares += ul(row, col, i);
      numSquares += ur(row, col, i);
      numSquares += ll(row, col, i);
      numSquares += lr(row, col, i);
   }
   return numSquares;
}
/*****************************
 *Description: Checks the upper left
 *quadrant for new squares.
******************************/
int SBoard::ul(int row, int col, int shift)
{
   if((col-shift)<0 || (row-shift)<0)
   {
      return 0;
   }
   if(board[row-shift][col-shift]=='x' &&
      board[row][col-shift]=='x'&&
      board[row-shift][col]=='x')
   {
      return 1;
   }
   return 0;
}
/*****************************
 *Description: Cheacks the upper right
 *quadrant for new squares.
******************************/
int SBoard::ur(int row, int col, int shift)
{
   if((col+shift)>9 || (row-shift)<0)
   {
      return 0;
   }
   if(board[row-shift][col+shift]=='x' &&
      board[row][col+shift]=='x'&&
      board[row-shift][col]=='x')
   {
      return 1;
   }
   return 0;
}
/*****************************
 *Description: Checks the lower left
 *quadrant for new squares.
******************************/
int SBoard::ll(int row, int col, int shift)
{
   if((col-shift)<0 || (row+shift)>9)
   {
      return 0;
   }
   if(board[row+shift][col-shift]=='x' &&
      board[row][col-shift]=='x'&&
      board[row+shift][col]=='x')
   {
      return 1;
   }
   return 0;
}
/*****************************
 *Description: Checks the lower right
 *quadrant for new squares.
******************************/
int SBoard::lr(int row, int col, int shift)
{
   if((col+shift)>9 || (row+shift)>9)
   {
      return 0;
   }
   if(board[row+shift][col+shift]=='x' &&
      board[row][col+shift]=='x'&&
      board[row+shift][col]=='x')
   {
      return 1;
   }
   return 0;
}




