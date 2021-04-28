//Include Statements
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe.h"
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
    vector<unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);
 
  public:
    void save_game(unique_ptr<TicTacToe>& b);
    void get_winner_total(int& o, int& w, int& t);
    friend std::ostream & operator << (std::ostream &out, const TicTacToeManager &manager);
 
};
#endif
