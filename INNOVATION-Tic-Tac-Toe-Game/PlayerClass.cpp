#include "PlayerClass.h"
#include "BoardMethods.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//Displays the number of games won
void PlayerClass::DisplayScoreBoard(int ponewins, int ptwowins)
{
	cout << "\n\n----------------------------------" << endl;
	cout << "|           Total Wins           |" << endl;
	cout << "----------------------------------" << endl;
	cout << "| Player one : " << ponewins << " | Player two: " << ptwowins << " |" << endl;
	cout << "----------------------------------";

}
