#ifndef PLAYERCLASS_H
#define PLAYERCLASS_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class PlayerClass
{
private:

	int score;


public:

	void DisplayScoreBoard();
	int CheckWin();
	int CheckDraw();

};
#endif
