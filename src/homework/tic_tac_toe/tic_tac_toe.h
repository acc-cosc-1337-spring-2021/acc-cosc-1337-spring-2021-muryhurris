//Include Statements
#include <vector>
#include <string>

//Using Statements
using std::string; using std::vector;

//Class Creation
class Game 
{
    //Public Class Variables/Functions.
    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player()const{return player;}
        void display_board()const;
        string get_winner()
        {
            return winner;
        }
        

    //Private Class Variables/Functions.
    private:
        vector<string> pegs {9, ""};
        string player;
        string winner;
        void clear_board();
        bool check_board_full();
        void set_next_player();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();

};