#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//Include Statement

#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

#include <iostream>
#include <memory>

using std::cout; 
using std::cin;
using std::unique_ptr;
using std::make_unique;


 
TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}
 
//Tests if the 9 slots on the board are selected on 3x3 board
TEST_CASE("Test game over if 9 slots are selected")
{

  unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

  game->start_game("X");

  game->mark_board(1);
  game->mark_board(2);
  game->mark_board(3);
  game->mark_board(5);
  game->mark_board(4);
  game->mark_board(6);
  game->mark_board(8);
  game->mark_board(7);
  game->mark_board(9);
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "C"); 
}


//Tests the set_player function for player "X"
TEST_CASE("Test first player set to X")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
  game->start_game("X");

  REQUIRE(game->get_player() == "X");
}

//Tests the set_player function for player "O"
TEST_CASE("Test first player set to O")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
  game->start_game("O");

  REQUIRE(game->get_player() == "O");
}


//POSITIONS 1, 4, 7!
//  | 1 |  |   |
//  | 4 |  |   |
//  | 7 |  |   |
TEST_CASE("Tests first column win POSITIONS 1,4,7", "3x3 Board")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
  game->start_game("X"); 

  game->mark_board(1); //X
  game->mark_board(2); //O
  game->mark_board(4); //X
  game->mark_board(3); //O
  game->mark_board(7); //X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");
}

//POSITIONS 2, 5, 8!
//  |   | 2 |   |
//  |   | 5 |   |
//  |   | 8 |   |
TEST_CASE("Tests second column win POSITIONS 2,5,8", "3x3 Board")
{

  unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
  game->start_game("X");

  game->mark_board(2);//X
  game->mark_board(7);//O
  game->mark_board(5);//X
  game->mark_board(9);//O
  game->mark_board(8);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");
}

//POSITIONS 3, 6, 9!
//  |   |   |  3 |
//  |   |   |  6 |
//  |   |   |  9 |
TEST_CASE("Tests second column win POSITIONS 3,6,9", "3x3 Board")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
  game->start_game("X");

  game->mark_board(3);//X
  game->mark_board(2);//O
  game->mark_board(6);//X
  game->mark_board(5);//O
  game->mark_board(9);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");
}

//POSITIONS 1, 2, 3!
//  | 1 | 2 |  3 |
//  |   |   |    |
//  |   |   |    |
TEST_CASE("Tests first row win POSITIONS 1,2,3", "3x3 Board")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
  game->start_game("X");

  game->mark_board(1);//X
  game->mark_board(7);//O
  game->mark_board(2);//X
  game->mark_board(9);//O
  game->mark_board(3);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");
}

//POSITIONS 4, 5, 6!
//  |   |   |   |
//  | 4 | 5 | 6 |
//  |   |   |   |
TEST_CASE("Tests second row win POSITIONS 4,5,6 with manager", "3x3 Board")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
  game->start_game("X");

  game->mark_board(4);//X
  game->mark_board(2);//O
  game->mark_board(5);//X
  game->mark_board(3);//O
  game->mark_board(6);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");
}

//POSITIONS 7, 8, 9!
//  |   |   |   |
//  |   |   |   |
//  | 7 | 8 | 9 |
TEST_CASE("Tests third row win POSITIONS 7,8,9", "3x3 Board")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
  game->start_game("X");

  game->mark_board(7);//X
  game->mark_board(5);//O
  game->mark_board(8);//X
  game->mark_board(3);//O
  game->mark_board(9);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");
}

//POSITIONS 1, 5, 9!
//  | 1 |   |   |
//  |   | 5 |   |
//  |   |   | 9 |
TEST_CASE("Tests first diagonal win POSITIONS 1,5,9 (TOP LEFT)", "3x3 Board")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
  game->start_game("X");

  game->mark_board(1);//X
  game->mark_board(2);//O
  game->mark_board(5);//X
  game->mark_board(3);//O
  game->mark_board(9);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");

}

//POSITIONS 3, 5, 7!
//  |   |   | 3 |
//  |   | 5 |   |
//  | 7 |   |   |
TEST_CASE("Tests second diagonal win POSITIONS 3,5,7 (BOTTOM LEFT)", "3x3 Board")
{

  unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
  game->start_game("X");

  game->mark_board(7);//X
  game->mark_board(2);//O
  game->mark_board(5);//X
  game->mark_board(9);//O
  game->mark_board(3);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");

}

//Tests the TicTacToeManager and ensure it saves games.
TEST_CASE("Tests TicTacToeManager")
{
  TicTacToeManager manager;
  int x; 
  int o;
  int t;

  unique_ptr<TicTacToe> game1 = make_unique<TicTacToe3>();
  game1->start_game("X");

  game1->mark_board(4);
  game1->mark_board(2);
  game1->mark_board(5);
  game1->mark_board(3);
  game1->mark_board(6);
  REQUIRE(game1->game_over() == true);
  REQUIRE(game1->get_winner() == "X");

  manager.save_game(game1);

  manager.get_winner_total(o, x, t);
  REQUIRE(o == 0);
  REQUIRE(x == 1);
  REQUIRE(t == 0);

  unique_ptr<TicTacToe> game2 = make_unique<TicTacToe3>();
  game2->start_game("O");

  game2->mark_board(7);
  game2->mark_board(2);
  game2->mark_board(8);
  game2->mark_board(3);
  game2->mark_board(9);
  REQUIRE(game2->game_over() == true);
  REQUIRE(game2->get_winner() == "O");

  manager.save_game(game2);

  manager.get_winner_total(o, x, t);
  REQUIRE(o == 1);
  REQUIRE(x == 1);
  REQUIRE(t == 0);


  unique_ptr<TicTacToe> game3 = make_unique<TicTacToe3>();
  game3->start_game("X");

  game3->mark_board(1);
  game3->mark_board(2);
  game3->mark_board(3);
  game3->mark_board(5);
  game3->mark_board(4);
  game3->mark_board(6);
  game3->mark_board(8);
  game3->mark_board(7);
  game3->mark_board(9);
  REQUIRE(game3->game_over() == true);

  manager.save_game(game3);

  manager.get_winner_total(o, x, t);
  REQUIRE(o == 1);
  REQUIRE(x == 1);
  REQUIRE(t == 1);

}

//Tests if 9 slots are selected on a 4x4 board.
TEST_CASE("Test game over if 9 slots are selected", "4x4 Board")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
   game->start_game("X");

  game->mark_board(1);
  game->mark_board(2);
  game->mark_board(3);
  game->mark_board(5);
  game->mark_board(4);
  game->mark_board(6);
  game->mark_board(8);
  game->mark_board(7);
  game->mark_board(9);
  game->mark_board(10);
  game->mark_board(11);
  game->mark_board(12);
  game->mark_board(14);
  game->mark_board(13);
  game->mark_board(16);
  game->mark_board(15);
  REQUIRE(game->game_over() == true);


  REQUIRE(game->get_winner() == "C");
}

//Tests the set_player function for player "X"
TEST_CASE("Test first player set to X", "4x4 Board")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("X");

  REQUIRE(game->get_player() == "X");
}

//Tests the set_player function for player "0"
TEST_CASE("Test first player set to O", "4x4 Board")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("O");

  REQUIRE(game->get_player() == "O");
}

//POSITIONS 1, 5, 9, 13!
//  | 1  |   |   |   |
//  | 5  |   |   |   |
//  | 9  |   |   |   |
//  | 13 |   |   |   |
TEST_CASE("Tests first column win POSITIONS 1,5,9,13", "4x4 Board")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("X");

  game->mark_board(1);//X
  game->mark_board(2);//O
  game->mark_board(5);//X
  game->mark_board(6);//O
  game->mark_board(9);//X
  game->mark_board(10);//O
  game->mark_board(13);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");


}

//POSITIONS 2, 6, 10, 14!
//  |  | 2  |   |   |
//  |  | 6  |   |   |
//  |  | 10 |   |   |
//  |  | 14 |   |   |
TEST_CASE("Tests second column win POSITIONS 2,6,10,14", "4x4 Board")
{

  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("X"); 

  game->mark_board(2);//X
  game->mark_board(3);//O
  game->mark_board(6);//X
  game->mark_board(7);//O
  game->mark_board(10);//X
  game->mark_board(11);//O
  game->mark_board(14);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");
}

//POSITIONS 3, 7, 11, 15!
//  |  |   |  3  |   |
//  |  |   |  7  |   |
//  |  |   |  11 |   |
//  |  |   |  15 |   |
TEST_CASE("Tests third column win POSITIONS 3,7,11,15", "4x4 Board")
{

  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("X");

  game->mark_board(3);//X
  game->mark_board(4);//O
  game->mark_board(7);//X
  game->mark_board(8);//O
  game->mark_board(11);//X
  game->mark_board(12);//O
  game->mark_board(15);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");
}

//POSITIONS 4, 8, 12, 16!
//  |  |   |   |  4  |
//  |  |   |   |  8  |
//  |  |   |   |  12 |
//  |  |   |   |  16 |
TEST_CASE("Tests fourth column win POSITIONS 4,8,12,16", "4x4 Board")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("X");

  game->mark_board(4);//X
  game->mark_board(3);//O
  game->mark_board(8);//X
  game->mark_board(7);//O
  game->mark_board(12);//X
  game->mark_board(11);//O
  game->mark_board(16);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");
}

//POSITIONS 1, 2, 3, 4!
//  | 1 | 2 | 3 | 4 |
//  |   |   |   |   |
//  |   |   |   |   |
//  |   |   |   |   |
TEST_CASE("Tests first row win POSITIONS 1,2,3,4", "4x4 Board")
{
  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("X");

  game->mark_board(1);//X
  game->mark_board(7);//O
  game->mark_board(2);//X
  game->mark_board(9);//O
  game->mark_board(3);//X
  game->mark_board(8);//O
  game->mark_board(4);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");
}

//POSITIONS 5, 6, 7, 8!
//  |   |   |   |   |
//  | 5 | 6 | 7 | 8 |
//  |   |   |   |   |
//  |   |   |   |   |
TEST_CASE("Tests second row win POSITIONS 5,6,7,8", "4x4 Board")
{


  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("X");

  game->mark_board(5);//X
  game->mark_board(1);//O
  game->mark_board(6);//X
  game->mark_board(2);//O
  game->mark_board(7);//X
  game->mark_board(3);//O
  game->mark_board(8);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");

}

//POSITIONS 9, 10, 11, 12!
//  |   |    |    |    |
//  |   |    |    |    |
//  | 9 | 10 | 11 | 12 |
//  |   |    |    |    |
TEST_CASE("Tests third row win POSITIONS 9,10,11,12", "4x4 Board")
{


  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("X");

  game->mark_board(9);//X
  game->mark_board(1); //O
  game->mark_board(10);//X
  game->mark_board(2);//O
  game->mark_board(11);//X
  game->mark_board(3);//O
  game->mark_board(12);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");

}

//POSITIONS 13, 14, 15, 16!
//  |    |    |      |      |
//  |    |    |      |      |
//  |    |    |      |      |
//  | 13 | 14 |  15  |  16  |
TEST_CASE("Tests third row win POSITIONS 13,14,15,16", "4x4 Board")
{


  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("X");

  game->mark_board(13);//X
  game->mark_board(1); //O
  game->mark_board(14);//X
  game->mark_board(2);//O
  game->mark_board(15);//X
  game->mark_board(3);//O
  game->mark_board(16);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");

}


//POSITIONS 1, 6, 11, 16!
//  | 1  |    |    |      |
//  |    |  6 |    |      |
//  |    |    | 11 |      |
//  |    |    |    |  16  |
TEST_CASE("Tests first diagonal win POSITIONS (TOP LEFT) 1,6,11,16", "4x4 Board")
{


  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("X");

  game->mark_board(1);//X
  game->mark_board(2);//O
  game->mark_board(6);//X
  game->mark_board(3);//O
  game->mark_board(11);//X
  game->mark_board(12);//O
  game->mark_board(16);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");

}

//POSITIONS 4, 7, 10, 13!
//  |     |    |    | 4  |
//  |     |    |  7 |    |
//  |     | 10 |    |    |
//  | 13  |    |    |    |
TEST_CASE("Tests second diagonal win POSITIONS (BOTTOM LEFT) 4,7,10,13", "4x4 Board")
{

  unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
  game->start_game("X");

  game->mark_board(13);//X
  game->mark_board(2); //O
  game->mark_board(10);//X
  game->mark_board(3);//O
  game->mark_board(7);//X
  game->mark_board(12);//O
  game->mark_board(4);//X
  REQUIRE(game->game_over() == true);
  REQUIRE(game->get_winner() == "X");

}

//Tests the TicTacToeManager and ensure it saves games.
TEST_CASE("Test TicTacToe manager for 4x4 Boards")
{
	TicTacToeManager manager;
  int x;
  int o;
  int t;


  unique_ptr<TicTacToe> game1 = make_unique<TicTacToe4>();
  game1->start_game("X");

  game1->mark_board(1);
  game1->mark_board(5); 
  game1->mark_board(2);
  game1->mark_board(6);
  game1->mark_board(3);
  game1->mark_board(7);
  game1->mark_board(4);
  REQUIRE(game1->game_over() == true);
  REQUIRE(game1->get_winner() == "X");
  manager.save_game(game1);
unique_ptr<TicTacToe> game2 = make_unique<TicTacToe4>();
  game2->start_game("O");

  game2->mark_board(1); 
  game2->mark_board(5);
  game2->mark_board(2);
  game2->mark_board(6);
  game2->mark_board(3);
  game2->mark_board(7);
  game2->mark_board(4);
  REQUIRE(game2->game_over() == true);
  REQUIRE(game2->get_winner() == "O");
  manager.save_game(game2);



  unique_ptr<TicTacToe> game3 = make_unique<TicTacToe4>();
  game3->start_game("X");

  game3->mark_board(1);
  game3->mark_board(2);
  game3->mark_board(3);
  game3->mark_board(4);
  game3->mark_board(5);
  game3->mark_board(6);
  game3->mark_board(7);
  game3->mark_board(8);

  game3->mark_board(9);
  game3->mark_board(10);
  game3->mark_board(11);
  game3->mark_board(12);
  game3->mark_board(14);
  game3->mark_board(15);
  game3->mark_board(16);
  game3->mark_board(13);


  manager.save_game(game3);

  manager.get_winner_total(o, x, t);
  REQUIRE(o == 1);
  REQUIRE(x == 1);
  REQUIRE(t == 1);

}