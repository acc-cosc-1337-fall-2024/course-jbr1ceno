//cpp
#include "tic_tac_toe_manager.h"
#include<memory>
#include<vector>

using std::cout;

//public functions


void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b)); //?????? WHY THE SEGMENTATION FAULT (core dump)?????
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
    o = o_win;
    w = x_win;
    t = ties;
}

void TicTacToeManager::display_games()
{
    for(auto& game : games)
    {
        (*game).display_board();
    }
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