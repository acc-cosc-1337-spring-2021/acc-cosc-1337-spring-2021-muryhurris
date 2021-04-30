//Include Statement
#include "tic_tac_toe_data.h"

//Creates vector unique ptr of TicTacToeBoards and opens the file.
void TicTacToeData::save_games(const vector<unique_ptr<TicTacToe>>& games) {
  std::ofstream out_file;

  out_file.open(file_name);

  if(out_file.is_open()) {
    for (auto& game: games){

      for (auto& pos: game->get_pegs()) {
        out_file<<pos;
      }
      out_file<<game ->get_winner();
      out_file<<"\n";
    }
    out_file.close();
  }


}

//Creates vector unique ptr of TicTacToeBoards and opens the file.
vector<unique_ptr<TicTacToe>> TicTacToeData::get_games() {
  vector<unique_ptr<TicTacToe>> boards;
  std::ifstream in_file;

  in_file.open(file_name);

//Creates a string line
  string line;

//Gets a line from the file and creates a vector<string> pegs.
  if (in_file.is_open()) {
    while(std::getline(in_file, line)) {
      vector<string> pegs;

      for(std::size_t i = 0; i < (line.size() -1); ++i) {
        string ch(1, line[i]);
        pegs.push_back(ch);
      }
      
      //Creates a string to get the winner.
      string winner{line[line.size() -1]};

      //Creates unique ptr of TicTacToeBoard.
      unique_ptr<TicTacToe> game;

      //Creates board of TicTacToe3 using make_unique with vector of pegs and winner as parameter.
      if (pegs.size() == 9) {
        game = std::make_unique<TicTacToe3>(pegs, winner);

      //Creates board of TicTacToe4 using make_unique with vector of pegs and winner as parameter.
      } else if (pegs.size() == 16) {
        game = std::make_unique<TicTacToe4>(pegs, winner);
      }

      //Adds boards to the boards vector
      boards.push_back(std::move(game));
    }

    //Closes the file
    in_file.close();
  }

  //Return the boards vector
  return boards;
} 