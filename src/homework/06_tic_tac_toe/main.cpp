#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include<iostream>
#include<string>
#include<vector>
#include<memory>

using std::cout; using std::cin; using std::string;
using std::make_unique;

int main() 
{
	std::unique_ptr<TicTacToe> game;
	TicTacToeManager gameManager;
	int xWins = 0;
	int oWins = 0;
	int ties = 0;
	string first_player;
	char user_choice = 'y';
	int board_size;


	do
	{
		cout<<"Choose the board size you want  (3 or 4): ";
		cin>>board_size;

		if(board_size == 3)
		{
			game = make_unique<TicTacToe3>(); //instance of TicTacToe3
		}
		else if(board_size == 4)
		{
			game = make_unique<TicTacToe4>(); //instance of TicTacToe3
		}
		else
		{
			cout<<"Invalid board size. Please choose 3 or 4. \n";
			continue;
		}

		cout<<"Enter first player: ";
		cin>>first_player;

		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game->mark_board(position);
			game->display_board();
			
			
			if(game->game_over() == true)
			{
				if(game->get_winner() != "C")
				{
					cout<<"The winner of the game is: "<<game->get_winner()<<"\n";
					//gameManager.save_game(game);
				}
				else
				{
					cout<<"There is no winner.\n";
					//gameManager.save_game(game);
				}
			}

			//gameManager.save_game(game);								//std::move is sed therefore game variable cant be used bc it doesn't point to anything anymore
			//gameManager.get_winner_total(oWins, xWins, ties);
			
		}
		
		gameManager.save_game(game);						
		gameManager.get_winner_total(oWins, xWins, ties);

		cout<<"Play again, enter y or Y? ";
		cin>>user_choice;
		cout<<"\nWins for X: "<<xWins<<"\nWins for O: "<<oWins<<"\nNumber of ties: "<<ties<<"\n";

	} while (user_choice == 'y' || user_choice == 'Y');
	

	return 0;
}