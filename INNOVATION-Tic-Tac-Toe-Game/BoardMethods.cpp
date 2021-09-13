#include "BoardMethods.h"
#include "PlayerClass.h"
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;
bool BoardMethods::InputValid() //This boolean checks if the input the user will make is a valid input
{
	int PlayerChoiceTest = PlayerChoice+1;
	string validate = to_string(PlayerChoiceTest);
		if(grid[PlayerChoice]!=validate)
		{
			inputv=false;
			return false;
		}
		else
		{
			inputv=true;
			return true;
		}

}

void BoardMethods::PlayerInput()
{
	if(turn==false)//Player 1's turn is when turn==false
	{
	switch(PlayerChoice) //Defined as a switch for every choice the player can make in the game 
		{
  	case 1:
    	grid[0]="X";
		break;
  	case 2:
    	grid[1]="X";
		break;
  	case 3:
		grid[2]="X";
		break;
  	case 4:
		grid[3]="X";
		break;
  	case 5:
		grid[4]="X";
		break;
  	case 6:
		grid[5]="X";
		break;
  	case 7:
		grid[6]="X";
		break;
  	case 8:
		grid[7]="X";
		break;
  	case 9:
		grid[8]="X";
		break;
		}
	}

	else//Player 2's turn begins when turn==true
{
	switch(PlayerChoice) //Switch statement for all player choices in game
		{
  	case 1:
    	grid[0]="O";
		break;
  	case 2:
    	grid[1]="O";
		break;
  	case 3:
		grid[2]="O";
		break;
  	case 4:
		grid[3]="O";
		break;
  	case 5:
		grid[4]="O";
		break;
  	case 6:
		grid[5]="O";
		break;
  	case 7:
		grid[6]="O";
		break;
  	case 8:
		grid[7]="O";
		break;
  	case 9:
		grid[8]="O";
		break;
		}
	}
}
void BoardMethods::DisplayGrid()
{
	//This is the grid for the program, with numbers and spacing included.

	cout << "  " << grid[0] << "  | " << grid[1] << " |  " << grid[2] << endl;
	cout << "  -------------" << endl;
	cout << "  " << grid[3] << "  | " << grid[4] << " |  " << grid[5] << endl;
	cout << "  -------------" << endl;
	cout << "  " << grid[6] << "  | " << grid[7] << " |  " << grid[8] << endl;
}
void BoardMethods::CheckTurn()
{
	if (turn == false)
	{
		cout << "Player 1's Turn: Enter a number (1-9) on the board\n"; //Player 1's Turn
		cin >> PlayerChoice; // Takes in the input of the player
		while(inputv==false)
		{
			cout << "Space is Taken\n";
			cin >> PlayerChoice;
		}
		PlayerInput();
		DisplayGrid(); //Displays the choice just made
		turn=true; //Ends the player's turn

	}
	else if (turn == true)
	{
		cout << "Player 2's Turn: Enter a number (1-9) on the board\n"; //Player 2's turn
		cin >> PlayerChoice; //Takes in the input of the player
		while(inputv==false)
		{
			cout << "Space is Taken\n";
			cin >> PlayerChoice;
		}
		PlayerInput();
		DisplayGrid(); //Displays the choice just made
		turn=false; //Ends the player's turn

	}
}

BoardMethods::BoardMethods()
{
	turn = false; //Sets the default turn
	PlayerChoice = 0; //Sets the default choice for the player
	inputv=true;
}

string BoardMethods::CoinFlip()
{
//This string does a random coin toss, from one to two to determine who goes first in the game.
	
	srand(time(0));
	int random = (rand() % 2) + 1;

	if (random == 1)
	{
		return "Player 1";
		turn = false;
	}
	else if (random == 2)
	{
		return "Player 2";
		turn = true;
	}

}
