#include "BoardMethods.h"
#include "PlayerClass.h"
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <cctype>

using namespace std;
bool BoardMethods::InputValid() //This boolean checks if the input the user will make is a valid input
{
	int PlayerChoiceTest = PlayerChoice;
	string validate = to_string(PlayerChoiceTest);
	//validate == "1", "2", "3", "4", "5", "6", "7", "8", "9";
		if(grid[PlayerChoice-1]!=validate)
		{
			inputv=false;//If there is a space that is taken it will return to the user as a false input
			//cout << "1 False";
			return false;
		}
		else if(PlayerChoice <1 || PlayerChoice >9)
		{
			inputv=false;//If there is a space that is taken it will return to the user as a false input
			//cout << "2 false";
			return false;
		}
		else 
		{
				inputv = true; //Otherwise it's a valid input and will be put in as true
				//cout << "true";
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
	default:
		cout << "Improper input" << endl;
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
	cout << " -------------" << endl;
	cout << "  " << grid[3] << "  | " << grid[4] << " |  " << grid[5] << endl;
	cout << " -------------" << endl;
	cout << "  " << grid[6] << "  | " << grid[7] << " |  " << grid[8] << endl;
}
void BoardMethods::CheckTurn()
{
	
	if (turn == false)
	{
		cout << "Player 1's Turn: Enter a number (1-9) on the board\n"; //Player 1's Turn
		cin >> PlayerChoice; // Takes in the input of the player
		while(!InputValid()) //A loop to check if the Input is invalid and it will reply false
		{
			cout << "Space is Taken, Input Another Space: \n";
			cin >> PlayerChoice; //Asks the player again
			while(cin.fail())
			{
				cin.clear(); //If the input is wrong the program clears it
				cin.ignore(numeric_limits<streamsize>::max(),'\n'); //And ignores it

				cout << "Space is Taken or Invalid, Input Another Space: \n"; 
				cin >> PlayerChoice; //Asks the player again
			}

		}
		PlayerInput();//Runs the player input
		DisplayGrid(); //Displays the choice just made
		turn=true; //Ends the player's turn
		counter++;//Increases the counter for the win
/*		if (CheckWin() == 1)
		{
			cout << "Player 1 Wins";
		}
		else if (CheckWin() == 2)
		{
			cout << "Player 2 Wins";
		}
		else
		{
			CheckDraw();
		}
		*/
		
	}
	else
	{
		cout << "Player 2's Turn: Enter a number (1-9) on the board\n"; //Player 2's turn
		cin >> PlayerChoice; //Takes in the input of the player
		while(!InputValid()) //A loop to check if the Input is invalid and it will reply false
		{
			cout << "Space is Taken or Invalid, Input Another Space: \n";
			cin >> PlayerChoice; //Asks the player to input again
			while(cin.fail())
			{
				cin.clear(); //Clears the input
				cin.ignore(numeric_limits<streamsize>::max(),'\n'); //And ignores it

				cout << "Space is Taken or Invalid, Input Another Space: \n";
				cin >> PlayerChoice; //Asks the player to input again
			}
		}
		PlayerInput();
		DisplayGrid(); //Displays the choice just made
		turn=false; //Ends the player's turn
		counter++;

	}
}

BoardMethods::BoardMethods()
{
	PlayerChoice = 0; //Sets the default choice for the player
	inputv=true; //Sets the default input validation as true
	//grid[9] = { "1","2","3","4","5","6","7","8","9" };
}

string BoardMethods::CoinFlip()
{
//This string does a random coin toss, from one to two to determine who goes first in the game.
	
	srand(time(0));
	int random = (rand() % 2) + 1;

	if (random == 1)
	{
		turn = false;
		return "Player 1";
		
	}
	else if (random == 2)
	{
		turn = true;
		return "Player 2";
		
	}

}
//Checks win condition
int BoardMethods::CheckWin()
{
	if (grid[0] == "X" && grid[1] == "X" && grid[2] == "X")
	{
		return 1;
	}
	else if(grid[3] == "X" && grid[4] == "X" && grid[5] == "X")
	{
		return 1;
	}
	else if (grid[6] == "X" && grid[7] == "X" && grid[8] == "X")
	{
		return 1;
	}
	else if (grid[0] == "X" && grid[3] == "X" && grid[6] == "X")
	{
		return 1;
	}
		else if (grid[1] == "X" && grid[4] == "X" && grid[7] == "X")
	{
		return 1;
	}
		else if (grid[2] == "X" && grid[5] == "X" && grid[8] == "X")
	{
		return 1;
	}
	else if (grid[0] == "X" && grid[4] == "X" && grid[8] == "X")
	{
		return 1;
	}
	else if (grid[2] == "X" && grid[4] == "X" && grid[6] == "X")
	{
		return 1;
	}
	//End of Player 1
		if (grid[0] == "O" && grid[1] == "O" && grid[2] == "O")
	{
		return 2;
	}
	else if(grid[3] == "O" && grid[4] == "O" && grid[5] == "O")
	{
		return 2;
	}
	else if (grid[6] == "O" && grid[7] == "O" && grid[8] == "O")
	{
		return 2;
	}
	else if (grid[0] == "O" && grid[3] == "O" && grid[6] == "O")
	{
		return 2;
	}
		else if (grid[1] == "O" && grid[4] == "O" && grid[7] == "O")
	{
		return 2;
	}
		else if (grid[2] == "O" && grid[5] == "O" && grid[8] == "O")
	{
		return 2;
	}
	else if (grid[0] == "O" && grid[4] == "O" && grid[8] == "O")
	{
		return 2;
	}
	else if (grid[2] == "O" && grid[4] == "O" && grid[6] == "O")
	{
		return 2;
	}

	else
	{
		return 0;
	}

}
//Counts how may draws there have been
int BoardMethods::CheckDraw()
{

	if (counter == 9 && CheckWin() == 0)
	{
		cout << "Game is a draw";
		counter=0;
		return true;

	}
	else
		return false;

}

bool BoardMethods::CheckPlayer()
{
	cout << "\n\nWould you like to play again? Y/N" << endl;//Asks the player if they want to restart
	cin >> answer; //Stores the answer
	if (islower(answer)) answer = toupper(answer);//Turns a lowercase input into an uppercase input

		while (answer == 'Y' || 'N')
		{
			if (answer == 'Y')//Checks the answer
			{
				return true;
			}
			else if (answer == 'N')
			{
				exit(0);
			}

			cout << "Input is invalid. Please answer Y/N: " << endl;
			cin >> answer; //Asks the player to try again inputting something valid
			if (islower(answer)) answer = toupper(answer);//Turns a lowercase input into an uppercase input

		}
	
}
	

void BoardMethods::ResetBoard()
{
	//This all resets the board to 0.
	grid[0]="1";
	grid[1]="2";
	grid[2]="3";
	grid[3]="4";
	grid[4]="5";
	grid[5]="6";
	grid[6]="7";
	grid[7]="8";
	grid[8]="9";
	counter=0;


}
