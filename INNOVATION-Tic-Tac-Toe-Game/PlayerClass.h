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

	int score; //The score of the game, counting wins


public:

	void DisplayScoreBoard(); //Displays the score
	int CheckWin(); //The check win integer definied to be put into a scoreboard
	int CheckDraw(); //The check draw integer defined to be put into a scoreboard

};
#endif
