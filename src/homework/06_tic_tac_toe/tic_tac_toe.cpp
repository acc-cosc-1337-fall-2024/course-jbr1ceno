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
    for(long unsigned int i = 0; i < pegs.size(); i+= 3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
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
    //column wins with marked values 1,4,7 or 2,5,8, or 3,6,9 with all Os or Xs
    for(int i = 0; i < 3; i++)
    {
        if(pegs[i] != " " && pegs[i] == pegs[i+3] && pegs[i] == pegs[i+6])
        {
            winner = pegs[i];
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    //row wins with marked values 1,2,3 or 4,5,6 or 7,8,9 with all Os or Xs
    for(int i = 0; i < 3; i++)
    {
        if(pegs[i] != " " && pegs[i*3] == pegs[i*3+1] && pegs[i*3] == pegs[i*3+2])
        {
            winner = pegs[i*3];
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    //diagonal wins with marked values 1,5,9 or 7,5,3 with all Os or Xs
    if(pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8])
    {
        winner = pegs[0];
        return true;
    }
    if(pegs[2] != " " && pegs[2] == pegs[4] && pegs[2] == pegs[6])
    {
        winner = pegs[2];
        return true;
    }
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