//Include Statements
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_data.h"
#include <iostream>

//Saves the games data
TicTacToeManager::~TicTacToeManager() {
  std::cout<<"Saving games";
  data.save_games(games);
}
TicTacToeManager::TicTacToeManager(TicTacToeData d): data{d} {
  games = data.get_games();

  for (auto& game: games) {
    update_winner_count(game ->get_winner());
  }
}

//Updates how many wins a player has by their marker. 
void TicTacToeManager::update_winner_count(string winner) 
{
  if (winner == "X") {
    x_win++;
  } else if (winner == "O") {
    o_win++;
  } else {
    ties++;
  }
}

//Gets data from the previously played game and updates the winning players total. 
void TicTacToeManager::save_game(unique_ptr<TicTacToe>&b) 
{
  update_winner_count(b -> get_winner());
  games.push_back(std::move(b)); 
}

//Winner total variables
void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
  o = o_win;
  w = x_win;
  t = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
  for (auto& item: manager.games) {
    out<< *item << "\n";
  }
  return out;
}
