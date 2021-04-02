//Include Statements
#include "tic_tac_toe.h"
#include <iostream>

//Using Statements
using std::cin;
using std::cout;
using std::string;

//Main function
int main() 
{	
	//Variable and class definitions.
	Game game;
	string player;
	int position;

	//Prompts the user to enter in either 'X' or 'O' to being playing tic tac toe.
	cout<<"Ready to play tic tac toe? To start, type either X or O to claim your marker: ";
	cin>>player;

	//Starts the game and retrieves the players inputs and displays them on the board.
	game.start_game(player);
	game.display_board();

	//Do-While loop that keeps the game going and continues to prompt the players to enter in playable positions numbers.
	do
	{
		//As long as the player selects a position between 1-9, the game continues.
		cout<<"Player "<<game.get_player()<<" select a spot 1-9 to place your marker. \nType '10' if you'd like to close the board: ";
		cin>>position;
		game.mark_board(position);
		game.display_board();

	//If the player enters the number 10, the loop breaks and the game ends.
	}while(position != 10);
	return 0;
}