//Include Statements
#include "tic_tac_toe.h"
#include <iostream>
 
//Using Statements
using std::cout;
 
//Function in charge of clearing the board.
void TicTacToe::clear_board() 
{
  for (std::size_t i=0; i < pegs.size(); ++i) 
  {
    pegs[i] = " ";
  }
}
 
//Function in charge of declaring the winner based on the filled positions of the board.
void TicTacToe::set_winner()
{
  if (player == "X") {
    winner = "O";
  } else {
    winner = "X";
  }
}
 
//Function that controls if the game is over.
//The game ends if:
//1. There's a COLUMN_WIN or
//2. There's a ROW_WIN or
//3. There' a DIAGONAL_WIN or
//4. There's a (CHECK_)FULL_BOARD
bool TicTacToe::game_over() 
{
  bool column_winner = this -> check_column_win();
  bool row_winner = this -> check_row_win();
  bool diaganol_winner = this -> check_diagonal_win();
  bool is_full =  this -> check_board_full();
  
  
  if (column_winner || row_winner || diaganol_winner) 
  {
    this -> set_winner();
    return true;
  }
  if(!column_winner && !row_winner && !diaganol_winner && is_full) 
  {
    winner = "C";
    return true;
  }
  return false;
}
 
//Function that's incharge of following/checking the board to see if it's full. 
bool TicTacToe::check_board_full() 
{
  bool is_full = true;
  for (std::size_t i = 0; i < pegs.size(); ++i) 
  {
    if (pegs[i] == " ") {
      is_full = false;
      break;
    }
  }
  return is_full;
}
 
//Function that's incharge of starting the game,
void TicTacToe::start_game(string first_player) 
{
  player = first_player;
  this -> clear_board();
}
 
//Function that sets the second players marker depending on what the first player chose.
void TicTacToe::set_next_player()
{
  if (player == "X")
    player = "O";
  else  
    player = "X";
}
 
//Function incharge of marking the displayed board.
void TicTacToe::mark_board(int position) 
{
  pegs[position - 1] = player;
  set_next_player();
}
 
//Creates the board and displays it.
std::ostream& operator<<(std::ostream& out, const TicTacToe& game) 
{
  if(game.pegs.size() == 9) {
    for (int i = 0; i < 9; ++i) {
        out<<"|"<< i + 1;
        out<<"  "<<game.pegs[i];
        out<<"______"<<" |";
        if ((i + 1) % 3 == 0) {
          out<< "\n";
        }
      }
      return out;
  } else if (game.pegs.size() == 16) {
    for (int i = 0; i < 16; ++i) {
        out<<"|"<< i + 1;
        out<<"  "<<game.pegs[i];
        out<<"______"<<" |";
      if ((i + 1) % 4 == 0) {
          out<< "\n";
        }
    }
    return out;
  }
  return out;
}

//Makes sure the position chosen is the one filled and displayed.
std::istream& operator>>(std::istream& in, TicTacToe& game)
{
  int position;
  in >> position;
  game.mark_board(position);
  return in;
}

//Check Column Win Function 
bool TicTacToe::check_column_win() 
{
  return false;
}
 
//Check Row Win Function
bool TicTacToe::check_row_win() 
{
 return false;
}
 
 
//Check Diagonal Win Function
bool TicTacToe::check_diagonal_win()
{
  return false;
}

