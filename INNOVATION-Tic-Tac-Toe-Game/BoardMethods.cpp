#include "BoardMethods.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


void BoardMethods::DisplayGrid()
{
	//cout << "This is printing from DisplayGrid";
	cout << "  " << grid[0] << "  | " << grid[1]  << " |  " << grid[2] << endl;
	cout << "  -------------" << endl;
	cout << "  " << grid[3] << "  | " << grid[4] << " |  " << grid[5] << endl;
	cout << "  -------------" << endl;
	cout << "  " << grid[6] << "  | " << grid[7] << " |  " << grid[8] << endl;
}
