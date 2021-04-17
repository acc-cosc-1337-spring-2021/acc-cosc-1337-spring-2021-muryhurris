//Include Statements
#include "tic_tac_toe_manager.h"
#include <iostream>
 
//Using Statements
using std::cin;
using std::cout;
using std::string;
 
 
//Main Function
int main() 
{
 
    //Variables and Classes.
    int position;
    string player = "";
    int o_win = 0;
    int x_win = 0;
    int tie = 0;
    TicTacToe game;
    TicTacToeManager manager;
 
        
        //Welcomes the user to the game and prompts the user to enter the number '10' if they'd
        //like to kill the program. 
        cout<<"Welcome to Tic Tac Toe! If you'd like to quit the game, \n";
        cout<< "type 10 to exit!\n";
        
    //Prompts the first player to select a marker (X or O) then assigns the seconds player their marker automatically.
    //Then prompts both players which one should go first.
    do { 
        cout<<"Select Either X or O to pick your marker and get started: \n";
        cin>>player;
        while (player != "X" || player != "O" ) 
        {
            cout<<"Select the player that'll be going first! Either X or O: \n";
            cin>>player;
            if (player == "X" || player == "O") 
            {
                break;
            }
        }
            //Starts the game with player 1.
            game.start_game(player);
            cout << game;
 
            //Keeps the game running while true
            bool keep_playing = true;
 
            //Prompts the user to pick a position as long as the 'keep_playing' variable is 'true'.
            while(keep_playing) {
                cout << "Player "<< game.get_player() <<", pick a position (1-9): \n";
                cin >> game;
 
 
                if (game.game_over()) {
                        
                        //Saves the game once the game ends and assigns the winner a point.
                        //If a tie occurs, a point goes to the tie points.
                        manager.save_game(game);
                        manager.get_winner_total(o_win, x_win, tie);
 
 
                        string winner = game.get_winner();
                        string message = winner == "C" ? "It\'s a TIE!\n\n" : "Player " + winner + " WINS! \n";
 
                        cout<< message;
                        cout<< "All wins: \n";
                        cout<< "Player X: "<<x_win<<"\n";
                        cout<< "Player O: "<<o_win<<"\n";
                        cout<< "Ties: "<<tie<<"\n";
                        cout<<"Would you like to play again? Enter Y for yes and N for no: \n";
 
                        string answer;
                        cin>>answer;
 
                    //Keeps the game running as long as the player answers "Y/y"
                    if (answer == "N" || answer == "n") {
                        cout<<manager;
                        keep_playing = false;
                        position = 10;
                    } else {
                        keep_playing = false;
                    }
 
                } else {
                        cout<<game;
                }
            }
 
        }while(position != 10);
 
 
    return 0;
}

