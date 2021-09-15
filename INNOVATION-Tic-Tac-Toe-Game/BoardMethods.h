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

	string grid[9] = { "1","2","3","4","5","6","7","8","9" };
	bool turn; //Bool turn is made
	char answer;//The answer to the Y/N question at the end of the program
	bool inputv;//The boolean for the input validation
public:
	int counter = 0;//counts the board
	int PlayerChoice; //The creation of PlayerChoice
	bool CheckPlayer(); //Asks player if they would like to play another game
	int CheckWin(); //The check win integer definied to be put into a scoreboard
	int CheckDraw(); //The check draw integer defined to be put into a scoreboard
	bool InputValid();//Checks if the input is valid
	void GameStart(); //Game begins
	string CoinFlip(); //Gives the CoinFlip 
	void DisplayGrid(); //Displays the grid and the choices
	void CheckTurn();  //Checks the current turn from the two players
	void PlayerInput(); //Checks player input
	void ResetBoard(); // Resets board spaces for new game
	BoardMethods(); //The default board at the start of the game

};
#endif
