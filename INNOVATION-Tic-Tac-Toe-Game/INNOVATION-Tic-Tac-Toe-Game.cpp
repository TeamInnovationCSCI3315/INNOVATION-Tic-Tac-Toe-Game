#include "BoardMethods.h"
#include "PlayerClass.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main()
{

	cout << "Welcome to Tic-Tac-Toe" << endl;
	cout << "----------------------" << endl;

	cout << "A coin flip will determine which player goes first:" << endl;
	cout << endl;
	PlayerClass Player1;
	PlayerClass Player2;
	BoardMethods Board;
	system("pause");
	cout << endl;

	cout << Board.CoinFlip() << " Will Go First" << endl << endl;

	system("pause");

	cout << endl << endl;

	cout << "Rules: Labeled Player will input their desired location on the grid with numbers [1-9]" << endl;
	cout << "Person to get three of their symbols in a row will win (Player 1 = X, Player 2 = O) " << endl << endl;


	Board.DisplayGrid();

	cout << endl;

	cout << "Where would you like to go?";
}
