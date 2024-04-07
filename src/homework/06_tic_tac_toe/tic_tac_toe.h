//h
#include<iostream>
#include<string>
#include<vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();       //update
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board() const;
    std::string get_winner();   //new

private:
    //class private functions
    bool check_column_win();    //new
    bool check_row_win();       //new
    bool check_diagonal_win();  //new
    void set_winner();          //new
    void set_next_player();
    bool check_board_full();
    void clear_board();

    //class private data
    std::string player;
    std::vector<std::string> pegs{9, " "};
    std::string winner;                     //new
};

#endif