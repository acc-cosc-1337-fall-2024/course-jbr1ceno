//h
#include "tic_tac_toe.h"
#include<ostream>
#include<istream>
#include<vector>
#include<memory>

#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

class TicTacToeManager
{
public:
    //Manager(std::vector<TicTacToe>& b: tictactoes(b);
    void save_game(std::unique_ptr<TicTacToe>& b); // b  is the "game" variable
    void get_winner_total(int& o, int& w, int& t);
    void display_games();
private:
    //class private functions
    std::vector<std::unique_ptr<TicTacToe>> games{};
    void update_winner_count(std::string winner);

    //class private data
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
};

#endif