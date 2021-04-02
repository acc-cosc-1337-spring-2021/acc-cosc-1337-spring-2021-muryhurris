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

}
