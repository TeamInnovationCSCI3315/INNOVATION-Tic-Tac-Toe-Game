//Made by Team Innovation, Andrew Mester, Thomas Wood, Louis Mednick, Yash Bhawsar and Stefan Zawojski
#include "BoardMethods.h"
#include "PlayerClass.h"
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <cctype>
using namespace std;


int main()
{
	bool flag = true;
	string firstPlayer; //Player 1 string
	int choice = 0; //Sets the player choice to 1 for determining turn
	string answer;
	int ponewins = 0;
	int ptwowins = 0;

	cout << "Welcome to Tic-Tac-Toe" << endl; //Welcome statement with spacing
	cout << "----------------------" << endl;

	cout << "A coin flip will determine which player goes first:" << endl;//The coin flip display
	cout << endl;
	PlayerClass Player1; //Player 1
	PlayerClass Player2; //Player 2
	BoardMethods Board; //The board itself
	PlayerClass Scoreboard; //Scoreboard
	system("pause"); //System pauses for a moment
	cout << endl; //Player details

	firstPlayer = Board.CoinFlip(); //Coin flip calling from BoardMethods.cpp through the header files
	cout << firstPlayer << " Will Go First" << endl << endl; //Displays who will go first from the coin toss

	system("pause"); //system pauses for a moment

	cout << endl << endl;
	cout << "Rules: Labeled Player will input their desired location on the grid with numbers [1-9]\n\n"; //Displays rules to users
	cout << "The player to get three of their symbols in a row, column, or diagonal will win (Player 1 = X, Player 2 = O) \n\n"; //Win Condition
	cout << "If there are no rows, columns, or diagnoals made by a player by the end of the game, the game will end in a draw\n\n"; //States the Draw condition

	


	while (flag = true)
	{
		Board.DisplayGrid();

		while (choice != -1)
		{
			//	Board.DisplayGrid(choice); //The choice the player has to make called from BoardMethods.cpp
			cout << "\n";
			//	cout << "Where would " << firstPlayer << " like to go ? ";
			//	cin >> choice; //The player's choice
			Board.CheckTurn(); //Checks the turn
			if (Board.CheckWin() == 1)
			{
				cout << "Player 1 has Won";//Player 1 wins
				ponewins++;//A point is added to the scoreboard
				Scoreboard.DisplayScoreBoard(ponewins, ptwowins);//It displays the score
				
				Board.ResetBoard();//Resets the board
				break;
			}
			else if (Board.CheckWin() == 2)
			{
				cout << "Player 2 has Won";//Player 2 wins
				ptwowins++;//A point is added to the scoreboard
				Scoreboard.DisplayScoreBoard(ponewins, ptwowins);//It displays the score
				Board.ResetBoard();//Resets the board
				break;
			}
			else if (Board.CheckDraw())//If nobody wins it's a draw
			{
				Board.ResetBoard();//Resets the board
				break;

			}


		}

	flag = Board.CheckPlayer();
	
	}
}