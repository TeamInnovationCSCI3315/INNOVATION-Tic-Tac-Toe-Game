#ifndef BOARDMETHODS_H
#define BOARDMETHODS_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class BoardMethods
{
private:
	// The default values of the grid are stored below
	int counter = 0;//counts the board
	string grid[9] = { "1","2","3","4","5","6","7","8","9" };
	bool turn; //Bool turn is made

	bool inputv;//The boolean for the input validation
public:
	int PlayerChoice; //The creation of PlayerChoice
	int CheckWin(); //The check win integer definied to be put into a scoreboard
	int CheckDraw(); //The check draw integer defined to be put into a scoreboard
	bool InputValid();
	void GameStart(); //Game begins
	string CoinFlip(); //Gives the CoinFlip 
	void DisplayGrid(); //Displays the grid and the choices
	void CheckTurn();  //Checks the current turn from the two players
	void PlayerInput(); //Checks player input
	BoardMethods(); //The default board at the start of the game

};
#endif
