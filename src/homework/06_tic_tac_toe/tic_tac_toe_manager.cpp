//cpp
#include "tic_tac_toe_manager.h"
#include<memory>
#include<vector>

using std::cout;

//public functions


void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
    
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
    o = o_win;
    w = x_win;
    t = ties;
}


//private functions

void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "C")
    {
        ties++;
    }
    else if(winner == "X")
    {
        x_win++;
    }
    else
    {
        o_win++;
    }
}