//Define statments
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

//Include Statements
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>
#include <vector>
#include <string>
#include <fstream>

//Using Statements
using std::unique_ptr;
using std::vector;



//Class definition of TicTacToeData
class TicTacToeData {

  public:
    void save_games(const vector<unique_ptr<TicTacToe>>& games );
    vector<unique_ptr<TicTacToe>> get_games();
  private:
    const std::string file_name{"tic-tac-toe-data.dat"};
};

#endif