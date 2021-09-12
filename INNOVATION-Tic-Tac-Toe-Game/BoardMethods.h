#ifndef BOARDMETHODS_H
#define BOARDMETHODS_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class BoardMethods
{
private:
	// Grid is below the
	string grid[9] = { "1","2","3","4","5","6","7","8","9" };
	bool turn;
public:
	string CoinFlip();
	void DisplayGrid();
	void CheckTurn(bool);


};
#endif
