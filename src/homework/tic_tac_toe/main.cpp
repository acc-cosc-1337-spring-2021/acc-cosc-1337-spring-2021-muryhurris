//Include Statements
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<memory>
#include<iostream>
 
//Using Statements
using std::cin;
using std::cout;
using std::string;
using std::unique_ptr;
using std::make_unique;
 
//Main Function
int main() 
{
 
    //Variables and Classes.
    string play_again;
    int o_win = 0;
    int x_win = 0;
    int tie = 0;
    TicTacToeManager manager;
	
	//Prompts the user to choose which board size and player they'd like to select. 
    cout<<"Welcome to tic tac toe.\n";
	
	do{
		unique_ptr<TicTacToe> game;
		string game_size;
		do {
			cout<< "Which board size would you like to play? 3x3 or 4x4? (Enter 3 or 4):\n";
			cin>>game_size;

			if(game_size == "3") {
				game = make_unique<TicTacToe3>();

			} else if (game_size == "4") {
				game = make_unique<TicTacToe4>();
			}
		} while(!(game_size == "3" || game_size == "4"));
		
		string player;

		do{
			cout<<"Select who will play first (X or O): \n";
			cin>>player;
		} while (!(player == "X" || player == "O"));

		//Starts the game.
			game -> start_game(player);
			cout << *game;

		//Prompts the user to select a playable slot.
			do {
				cout << "Player "<< game->get_player() <<" select a slot\n";
				cin >> *game;
				cout<< *game;
			}while(!(game->game_over()));

		//Saves the game and adds a win to the correct players total.
			string winner = game ->get_winner();
			string message = winner == "C" ? "It\'s a TIE!\n\n" : "Player " + winner + " WINS! \n";
			cout<<message;
			manager.save_game(game);
			manager.get_winner_total(o_win, x_win, tie);

			cout<< "ALL WINS: \n";
			cout<< "PLAYER X WINS: "<<x_win<<"\n";
			cout<< "PLAYER O WINS: "<<o_win<<"\n";
			cout<< "TIES: "<<tie<<"\n";
			cout<<"Would you like to play again? (Y or N)\n";
			cin>>play_again;


	}while(play_again == "Y" || play_again == "y");
	
	//Shows past games after the user is finished playing. 
	cout<< "Past Games:\n\n";
	cout<<manager;

	return 0;
}