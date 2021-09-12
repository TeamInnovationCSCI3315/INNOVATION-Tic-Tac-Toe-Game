#ifndef BOARDMETHODS_H
#define BOARDMETHODS_H
#include <iostream>
#include <string>
using namespace std;

class BoardMethods
{
private:
	string grid[9] = { "1","2","3","4","5","6","7","8","9" };
	bool turn;
public:
	void DisplayGrid(int[]);
	void CheckTurn(bool);


};
#endif
