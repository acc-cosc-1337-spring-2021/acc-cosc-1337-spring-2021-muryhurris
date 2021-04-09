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
	string again;
	int position;
	

	//While loop that keeps the game running. After the first game played, the user will be asked to input 'Y/y' in order to play again.
	while(again == "Y" or 'y')
	{
		//Asks for the player to input their desired marker. 
		cout<<"Welcome To Tic Tac Toe! Select Either X or O to pick your marker and get started! ";
		cin>>player;

		//The second player is assigned whatever the first player didn't choose.
		while (player != "X" or player != "O")
		{
			//The players decide who goes first. 
			cout<<"Select the player that'll be going first! Either X or O: ";
			cin>>player;
			if (player == "X" or player == "O")
			{
				break;
			}
		}
		//The game starts with whoever was chosen to go first'
		game.start_game(player);
		//The board is displayed
		game.display_board();

		//While loop that prompts the players to pick a position until: 1. A player wins 2. There's a tie. 
		while(game.game_over() == false)
		{
			cout<<"Player "<<game.get_player()<<", Pick a position (1-9): ";
			cin>>position;
			
			//While loop that protects against using any numbers smaller than 1 or larger than 9. 
			while(position < 1 or position > 9)
			{
				cout<<"That position doesn't exist! Please try again: ";
				cin>>position;
			}
			//Marks the board depending on what position the players chose, then displays the board with the new positions.
			game.mark_board(position);
			game.display_board();
		}
	//If there's a tie, the 'game_winner' function announces it.
	if(game.get_winner() == "C")
	{
		cout<<"It's a TIE!";
	}
	
	//If there's not a tie, the 'game_winner' function announces the player. 
	else
	cout<<"Player "<<game.get_winner()<<" has WON!\n";

	//Prompts the user to enter either 'Y' or 'y' to play Tic Tac Toe again.
	cout<<"Play again? Enter Y/y to continue: ";
	cin>>again;
	}
	
	return 0;
}