//Include Statements
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include <iostream>
#include <vector>
#include <string>
#include <memory>
 
//Using Statements
using std::vector;
using std::string;
using std::unique_ptr;
using std::make_unique;
 
//Class definition of "TicTacToeManager"
class TicTacToeManager 
{
  private:
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    TicTacToeData data;
    vector<unique_ptr<TicTacToe>> games;
    void update_winner_count(string winner);
 
  public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData d);
    ~TicTacToeManager();
    void save_game(unique_ptr<TicTacToe>& b);
    void get_winner_total(int& o, int& w, int& t);
    friend std::ostream & operator << (std::ostream &out, const TicTacToeManager &manager);
 
};
#endif
