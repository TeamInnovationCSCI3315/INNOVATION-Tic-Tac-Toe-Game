#include "BoardMethods.h"
#include "PlayerClass.h"
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

/*void BoardMethods::GameStart()
{
	CoinFlip();
	DisplayGrid();
}*/

void BoardMethods::DisplayGrid(int choice)
{
//This is the grid for the program, with numbers and spacing included.
	//cout << "This is printing from DisplayGrid";
	cout << "  " << grid[0] << "  | " << grid[1]  << " |  " << grid[2] << endl;
	cout << "  -------------" << endl;
	cout << "  " << grid[3] << "  | " << grid[4] << " |  " << grid[5] << endl;
	cout << "  -------------" << endl;
	cout << "  " << grid[6] << "  | " << grid[7] << " |  " << grid[8] << endl;
}
void BoardMethods::CheckTurn(bool)
{

}

BoardMethods::BoardMethods()
{
	turn = false;
}

string BoardMethods::CoinFlip()
{
//This string does a random coin toss, from one to two to determine who goes first in the game.
	
	srand(time(0));
	int random = (rand() % 2) + 1;

	if (random == 1)
	{
		return "Player 1";
		turn = false;
	}
	else if (random == 2)
	{
		return "Player 2";
		turn = true;
	}

}
