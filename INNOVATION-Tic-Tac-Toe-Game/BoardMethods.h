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
	bool turn;
public:
	void GameStart(); //Game begins
	string CoinFlip(); //Gives the CoinFlip 
	void DisplayGrid(int); //Displays the grid and the choices
	void CheckTurn(bool);  //Checks the current turn from the two players

	BoardMethods();

};
#endif
