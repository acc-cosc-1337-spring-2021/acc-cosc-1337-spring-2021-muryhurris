//Include Statement
#include "tic_tac_toe_4.h"


//Class function check_column_win
//Returns the function if there's a win by columm in the 4x4 board.
bool TicTacToe4::check_column_win(){
  bool win = false;

// POSITIONS 0, 4, 8, 12!
//  | 0 |   |   |   |
//  | 4 |   |   |   |
//  | 8 |   |   |   |
//  | 12|   |   |   |
  if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X" && pegs[12] == "X") {
    win = true;
    return win;
  }
  if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O" && pegs[12] == "O") {
    win = true;
    return win;
  }

  
// POSITIONS 2, 5, 9, 13!
//  |  |  2 |   |   |
//  |  |  5 |   |   |
//  |  |  9 |   |   |
//  |  | 13 |   |   |
  if (pegs[1] == "X" && pegs[5] == "X" && pegs[9] == "X" && pegs[13] == "X") {
    win = true;
    return win;
  }
  if (pegs[1] == "O" && pegs[5] == "O" && pegs[9] == "O" && pegs[13] == "O") {
    win = true;
    return win;
  }

// POSITIONS 3, 6, 10, 14!
//  |  |   |  3  |   |
//  |  |   |  6  |   |
//  |  |   |  10 |   |
//  |  |   |  14 |   |
  if (pegs[2] == "X" && pegs[6] == "X" && pegs[10] == "X" && pegs[14] == "X") {
    win = true;
    return win;
  }

  if (pegs[2] == "O" && pegs[6] == "O" && pegs[10] == "O" && pegs[14] == "O"){
    win = true;
    return win;
  }


//POSITIONS 3, 7, 11, 15! 
//  |  |   |   |  3 |
//  |  |   |   |  7 |
//  |  |   |   | 11 |
//  |  |   |   | 15 |
  if (pegs[3] == "X" && pegs[7] == "X" && pegs[11] == "X" && pegs[15] == "X") {
    win = true;
    return win;
  }

  if (pegs[3] == "O" && pegs[7] == "O" && pegs[11] == "O" && pegs[15] == "O"){
    win = true;
    return win;
  }

  return win;
}


//Class function check_row_win
//Returns the function if there's a win by row in the 4x4 board.
bool TicTacToe4::check_row_win(){
   bool win = false;

// POSITIONS 0, 1, 2, 3!
//  | 0 | 1 | 2 | 3 |
//  |   |   |   |   |
//  |   |   |   |   |
//  |   |   |   |   |
  if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X" && pegs[3] == "X") {
    win = true;
    return win;
  }

  if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O" && pegs[3] == "O") {
    win = true;
    return win;
  }

// POSITIONS 4, 5, 6, 7!
//  |   |   |   |   |
//  | 4 | 5 | 6 | 7 |
//  |   |   |   |   |
//  |   |   |   |   |
  if (pegs[4] == "X" && pegs[5] == "X" && pegs[6] == "X" && pegs[7] == "X") {
    win = true;
    return win;
  }

  if (pegs[4] == "O" && pegs[5] == "O" && pegs[6] == "O" && pegs[7] == "O"){
    win = true;
    return win;
  }

// POSITIONS 8, 9, 10, 11!
//  |   |   |    |    |
//  |   |   |    |    |
//  | 8 | 9 | 10 | 11 |
//  |   |   |    |    |
  if (pegs[8] == "X" && pegs[9] == "X" && pegs[10] == "X" && pegs[11] == "X") {
    win = true;
    return win;
  }
  if (pegs[8] == "O" && pegs[9] == "O" && pegs[10] == "O" && pegs[11] == "O") {
    win = true;
    return win;
  }

// POSITIONS 12, 13, 14, 15!
//  |    |    |    |    |
//  |    |    |    |    |
//  |    |    |    |    |
//  | 12 | 13 | 14 | 15 |
  if (pegs[12] == "X" && pegs[13] == "X" && pegs[14] == "X" && pegs[15] == "X") {
    win = true;
    return win;
  }
  if (pegs[12] == "O" && pegs[13] == "O" && pegs[14] == "O" && pegs[15] == "O")  {
    win = true;
    return win;
  }

  return win;
}

//Class function check_diagonal_win
//Returns the function if there's a win by the diagonal in the 4x4 board.
bool TicTacToe4::check_diagonal_win(){
  bool win = false;

// POSITIONS 12, 13, 14, 15!
//  |  0 |    |     |    |
//  |    |  5 |     |    |
//  |    |    |  10 |    |
//  |    |    |     | 15 |
  if (pegs[0] == "X" && pegs[5] == "X" && pegs[10] == "X" && pegs[15] == "X") {
    win = true;
    return win;
  }
  if (pegs[0] == "O" && pegs[5] == "O" && pegs[10] == "O" && pegs[15] == "O") {
    win = true;
    return win;
  }

// POSITIONS 3, 6, 9, 12!
//  |    |    |     |  3 |
//  |    |    |  6  |    |
//  |    |  9 |     |    |
//  | 12 |    |     |    |

  if (pegs[3] == "X" && pegs[6] == "X" && pegs[9] == "X" && pegs[12] == "X") {
    win = true;
    return win;
  }

  if (pegs[3] == "O" && pegs[6] == "O" && pegs[9] == "O" && pegs[12] == "O") {
    win = true;
    return win;
  }

  return win;
}