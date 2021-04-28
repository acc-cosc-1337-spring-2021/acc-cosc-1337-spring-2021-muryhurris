//Include statement
#include "tic_tac_toe_3.h"


//Class function check_column_win 
//Returns the function if there's a win by columm in the 3x3 board.
bool TicTacToe3::check_column_win() {
   bool win = false;

//POSITIONS 0, 3, 6!
//  | 0 |   |   |
//  | 3 |   |   |
//  | 6 |   |   |
  if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") {
    win = true;
    return win;
  }

  if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") {
    win = true;
    return win;
  }

//POSITIONS 1, 4, 7!
//  |  | 1 |   |
//  |  | 4 |   |
//  |  | 7 |   |
   if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") {
    win = true;
    return win;
  }
   if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O") {
    win = true;
    return win;
  }

//POSITIONS 2, 5, 8!
//  |  |  | 2 |
//  |  |  | 5 |
//  |  |  | 8 |
 if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X") {
    win = true;
    return win;
  }

  if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O") {
    win = true;
    return win;
  }

  return win;
}


//Class function check_row_win
//Returns the function if there's a win by row in the 3x3 board.
bool TicTacToe3::check_row_win(){
  bool win = false;

// POSITIONS 0, 1, 2!
//  | 0 | 1 | 2 |
//  |   |   |   |
//  |   |   |   |
  if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") {
    win = true;
    return win;
  }

  if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") {
    win = true;
    return win;
  }

//  POSITIONS 3, 4, 5!
//  |   |   |   |
//  | 3 | 4 | 5 |
//  |   |   |   |
  if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") {
    win = true;
    return win;
  }

  if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") {
    win = true;
    return win;
  }

// POSITIONS 6, 7, 8! 
//  |   |   |   |
//  |   |   |   |
//  | 6 | 7 | 8 |
  if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X") {
    win = true;
    return win;
  }
  if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O") {
    win = true;
    return win;
  }

  return win;
}



//Class function check_diagonal_win
//Returns the function if there's a win by the diagonal in the 3x3 board.
bool TicTacToe3::check_diagonal_win(){
  bool win = false;

// POSITIONS 0, 4, 8!
//  | 0 |   |   |
//  |   | 4 |   |
//  |   |   | 8 |
  if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") {
    win = true;
    return win;
  }
  if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") {
    win = true;
    return win;
  }

// POSITIONS 2, 4, 6!
//  |   |   | 2 |
//  |   | 4 |   |
//  | 6 |   |   |

  if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X") {
    win = true;
    return win;
  }

  if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O") {
    win = true;
    return win;
  }

  return win;
}