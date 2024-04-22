//cpp
//public functions
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
    set_winner();
    if(winner == "O" || winner == "X")
    {
        return true;
    }
    return check_board_full();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();

}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    if(pegs.size() == 9)
    {
        for(long unsigned int i = 0; i < pegs.size(); i+= 3)
        {
            cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
        }
    }
    else
    {
        for(long unsigned int i = 0; i < pegs.size(); i+= 4)
        {
            cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"|"<<pegs[i+3]<<"\n";
        }
    }
    
}

std::string TicTacToe::get_winner()
{
    set_winner(); 
    return winner;
}


//private functions
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}

//HW 7 Section

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

void TicTacToe::set_winner() //verify winner
{
    if(check_column_win() != true)
    {
        if(check_row_win() != true)
        {
            if(check_diagonal_win() != true)
            {
                winner = "C";
            }
        }
    }
    //cout<<"\nThe winner is: "<<winner;
    //cout<<"\nThe player is: "<<player;
}