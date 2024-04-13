#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

#include<iostream>
#include<string>
#include<vector>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	TicTacToeManager gameManager;
	int xWins = 0;
	int oWins = 0;
	int ties = 0;
	string first_player;
	char user_choice = 'y';

	do
	{
		cout<<"Enter first player: ";
		cin>>first_player;

		game.start_game(first_player);

		int position;

		while(!game.game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
			
			
			if(game.game_over() == true)
			{
				if(game.get_winner() != "C")
				{
					cout<<"The winner of the game is: "<<game.get_winner()<<"\n";
					gameManager.save_game(game);
				}
				else
				{
					cout<<"There is no winner.\n";
					gameManager.save_game(game);
				}
			}
			gameManager.get_winner_total(oWins, xWins, ties);
			
		}

		cout<<"Play again, enter y or Y? ";
		cin>>user_choice;
		cout<<"\nWins for X: "<<xWins<<"\nWins for O: "<<oWins<<"\nNumber of ties: "<<ties<<"\n";

	} while (user_choice == 'y' || user_choice == 'Y');
	

	return 0;
}