//h
#include<iostream>
#include<string>
#include<vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int size) : pegs(size * size, " "){} //constructor with an int parameter named size
    bool game_over();       //update
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board() const;
    std::string get_winner();   //new
    std::string winner;

protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win();    //new
    virtual bool check_row_win();       //new
    virtual bool check_diagonal_win();  //new

private:
    //class private functions
    void set_winner();          //new
    void set_next_player();
    bool check_board_full();
    void clear_board();

    //class private data
    std::string player;
    //std::vector<std::string> pegs{9, " "}; //now in protected
    //std::string winner;                     //new
};

#endif