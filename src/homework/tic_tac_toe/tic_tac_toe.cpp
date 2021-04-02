//Include Statements
#include "tic_tac_toe.h"
#include <iostream>

//Using Statements
using std::cout;

//Void function 'clear_board'
void Game::clear_board()
{
    for(std::size_t i=0; i < pegs.size(); ++i){
        pegs [i] == " ";
    }

}

//Bool function 'check_board_full', checks the board to see if the positions are full. 
bool Game::check_board_full()
{
    bool is_full = true;
    for(std::size_t i=0; i < pegs.size(); ++i){
        if (pegs[i] == " "){
            is_full = false;
            break;
        }
    }
    return is_full;
}

//Void function 'start_game', starts the game and assigns player one their marker.
void Game::start_game(string first_player)
{
    player = first_player;
    this -> clear_board();
}

//Void function 'set_next_player', depending on what player one chose, player two will have the left over marker.
void Game::set_next_player()
{
    if(player == "X")
        player = 'O';
    else
        player = "X";
}

//Void function 'mark_board', marks the board depending on what position the player choses. 
void Game::mark_board(int position)
{
    pegs[position - 1] = this ->player;

    this -> set_next_player();
}

//Void function 'display_board' displays the board and it's positions. 
void Game::display_board() const 
{
    for (int i = 0; i < 9; ++i)
    {
        cout<< i + 1;
        cout<<" "<<pegs[i];
        cout<<"_____"<<" |";
        if((i + 1) % 3 == 0)
        {
            cout<< "\n";
        }
    }
}