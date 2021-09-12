#ifndef PLAYERCLASS_H
#define PLAYERCLASS_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class PlayerClass
{
private:

	int score;



public:

	void CheckPlayer();
	void DisplayScoreBoard();
	int CheckWin();
	int CheckDraw();

};
#endif
