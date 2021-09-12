#include "BoardMethods.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main()
{
	string grid[9] = { "1","2","3","4","5","6","7","8","9" };
	cout << "This is printing from main";
	BoardMethods Board;
	Board.DisplayGrid(grid);
}
