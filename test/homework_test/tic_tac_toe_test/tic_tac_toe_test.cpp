#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//Include Statement
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

//Test Case to test the code that runs the tic tac toe game.
TEST_CASE("Test game over if 9 slots are selected.")
{
	//Creates a sudo tic tac toe game.
	Game game;
	//Calls the 'start_game' function with 'X' as the first player. 
	game.start_game("X");
	//Calls 'mark_board' function 9 times, for all 9 positions of the board.
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(9);
	game.mark_board(8);

REQUIRE(game.game_over() == true);
REQUIRE(game.get_winner() == "X");
}

//Tests the 'start_game' function by testing and playing as player 'X'
TEST_CASE("Test the 'start_game' function: Player 'X")
{
	Game game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

//Tests the 'start_game' function by testing and playing as player 'O'
TEST_CASE("Test the 'start_game' function: Player 'O'")
{
	Game game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

//-FIRST DIAGONAL SOLUTION-
//  | X |   |   |
//  |   | X |   |
//  |   |   | X |
//Tests the 'check_diagonal_win' function and fills positions 1-5-9 with 'X', then ends the game.
TEST_CASE("Test the 'check_diagonal_win' function: Starting from position 1 down to position 9, through position 5")
{
	Game game;

	game.start_game("X");
	game.mark_board(1); //X
	game.mark_board(2); //O
	game.mark_board(5); //X
	game.mark_board(4); //O
	game.mark_board(9); //X
	
	REQUIRE(game.game_over() == true);
}

//-SECOND DIAGONAL SOLUTION-
//  |   |   | X |
//  |   | X |   |
//  | X |   |   |
//Tests the 'check_diagonal_win' function and fills positions 7-5-3 with 'X', then ends the game.
TEST_CASE("Test the 'check_diagonal_win' function: Starting from position 7 up to position 3, through position 5")
{
	Game game;

	game.start_game("X");
	game.mark_board(7); //X
	game.mark_board(2); //O
	game.mark_board(5); //X
	game.mark_board(4); //O
	game.mark_board(3); //X
	
	REQUIRE(game.game_over() == true);
}

//-FIRST COLUMN SOLUTION-
//  | X |   |   |
//  | X |   |   |
//  | X |   |   |
//Tests the 'check_column_win' function and fills positions 1-4-7 with 'X', then ends the game.
TEST_CASE("Test 'check_column_win' function: Starting from position 1 down to 7, through 4")
{
	Game game;
	game.start_game("X");
	game.mark_board(1); //X
	game.mark_board(2);	//O
	game.mark_board(4); //X
	game.mark_board(3); //O
	game.mark_board(7); //X

	REQUIRE(game.game_over() == true);
}

//-SECOND COLUMN SOLUTION-
//  |  |  X |   |
//  |  |  X |   |
//  |  |  X |   |
//Tests the 'check_column_win' function and fills positions 2-5-8 with 'X', then ends the game.
TEST_CASE("Test 'check_column_win' function: Starting from position 2 down to 8, through 5")
{
	Game game;
	game.start_game("X");
	game.mark_board(2); //X
	game.mark_board(1); //O
	game.mark_board(5); //X
	game.mark_board(3); //O
	game.mark_board(8); //X

	REQUIRE(game.game_over() == true);
}

//-THIRD COLUMN SOLUTION-
//  |  |   |  X |
//  |  |   |  X |
//  |  |   |  X |
//Tests the 'check_column_win' function and fills positions 3-6-9 with 'X', then ends the game.
TEST_CASE("Test 'check_column_win' function: Starting from position 3 down to 9, through 6")
{
	Game game;
	game.start_game("X");
	game.mark_board(3); //X
	game.mark_board(1);	//O
	game.mark_board(6); //X
	game.mark_board(4); //O
	game.mark_board(9); //X

	REQUIRE(game.game_over() == true);
}

//-FIRST ROW SOLUTION-
//  | X | X | X |
//  |   |   |   |
//  |   |   |   |
//Tests the 'check_row_win' function and fills positions 1-2-3 with 'X', then ends the game.
TEST_CASE("Test 'check_row_win' function: Starting from position 1 to 3, through 2")
{
	Game game;
	game.start_game("X");
	game.mark_board(1); //X
	game.mark_board(4); //O
	game.mark_board(3); //X
	game.mark_board(7); //O
	game.mark_board(2); //X

	REQUIRE(game.game_over() == true);
}

//-SECOND ROW SOLUTION-
//  |   |   |   |
//  | X | X | X |
//  |   |   |   |
//Tests the 'check_column_win' function and fills positions 4-5-6 with 'X', then ends the game.
TEST_CASE("Test 'check_row_win' function: Starting from position 4 to 6, through 5")
{
	Game game;
	game.start_game("X");
	game.mark_board(4); //X
	game.mark_board(3); //O
	game.mark_board(5); //X
	game.mark_board(8); //O
	game.mark_board(6); //X

	REQUIRE(game.game_over() == true);
}

//-THIRD ROW SOLUTION-
//  |   |   |   |
//  |   |   |   |
//  | X | X | X |
//Tests the 'check_column_win' function and fills positions 7-8-9 with 'X', then ends the game.
TEST_CASE("Test 'check_row_win' function: Starting from position 7 to 9, through 8")
{
	Game game;
	game.start_game("X");
	game.mark_board(7); //X
	game.mark_board(4); //O
	game.mark_board(8); //X
	game.mark_board(1); //O
	game.mark_board(9); //X

	REQUIRE(game.game_over() == true);
}