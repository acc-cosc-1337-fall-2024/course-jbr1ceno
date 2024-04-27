#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<memory>

using std::cout; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/* TEST_CASE("Test if the board is full")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);

	game.display_board();
	REQUIRE(game.get_winner() == "C");
	REQUIRE(game.game_over() == true);
	std::cout<<"The winner of this round is:"<<game.get_winner()<<" \n\n";
}

TEST_CASE("Test first player set to X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(4);
	game.mark_board(3);
	game.mark_board(7);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(9);
	game.mark_board(8);
	game.display_board();
	REQUIRE(game.game_over() == true);
	std::cout<<"The winner of this round is: "<<game.get_winner()<<"\n\n";
}

TEST_CASE("Test win by second column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(2);
	game.mark_board(1);
	game.mark_board(4);
	game.mark_board(3);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(8);
	game.mark_board(7);
	game.mark_board(9);
	game.display_board();
	REQUIRE(game.game_over() == true);
	std::cout<<"The winner of this round is: "<<game.get_winner()<<"\n\n";
}

TEST_CASE("Test win by third column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(3);
	game.mark_board(1);
	game.mark_board(6);
	game.mark_board(2);
	game.mark_board(9);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(8);
	game.mark_board(7);
	game.display_board();
	REQUIRE(game.game_over() == true);
	std::cout<<"The winner of this round is: "<<game.get_winner()<<"\n\n";
}

TEST_CASE("Test win by first row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(4);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(7);
	game.mark_board(6);
	game.mark_board(9);
	game.mark_board(8);
	game.display_board();
	REQUIRE(game.game_over() == true);
	std::cout<<"The winner of this round is: "<<game.get_winner()<<"\n\n";
}

TEST_CASE("Test win by second row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(4);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(3);
	game.mark_board(9);
	game.mark_board(8);
	game.display_board();
	REQUIRE(game.game_over() == true);
	std::cout<<"The winner of this round is: "<<game.get_winner()<<"\n\n";
}

TEST_CASE("Test win by third row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(8);
	game.mark_board(2);
	game.mark_board(9);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(6);
	game.mark_board(4);

	game.display_board();
	REQUIRE(game.game_over() == true);
	std::cout<<"The winner of this round is: "<<game.get_winner()<<"\n\n";
}

TEST_CASE("Test win diagonally from top left")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(6);
	game.mark_board(4);
	game.mark_board(9);
	game.mark_board(7);
	game.mark_board(8);

	game.display_board();
	REQUIRE(game.game_over() == true);
	std::cout<<"The winner of this round is: "<<game.get_winner()<<"\n\n";
}

TEST_CASE("Test win diagonally from bottom left")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7);
	game.mark_board(9);
	game.mark_board(8);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(3);
	game.mark_board(2);
	game.mark_board(1);
	
	game.display_board();
	REQUIRE(game.game_over() == true);
	std::cout<<"The winner of this round is: "<<game.get_winner()<<"\n\n";
} 

TEST_CASE("Test get win from X")
{
	TicTacToe game;
	TicTacToeManager managerGames;
	game.start_game("X");
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(8);
	game.mark_board(2);
	game.mark_board(9);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(6);
	game.mark_board(4);

	int xWins;
	int oWins;
	int tWins;

	managerGames.save_game(game);
	game.display_board();
	managerGames.get_winner_total(oWins, xWins, tWins);
	cout<<"\nX has won: "<<xWins;
	cout<<"\nO has won: "<<oWins;
	cout<<"\nT has won: "<<tWins<<"\n";
	REQUIRE(xWins == 1);
	REQUIRE(oWins == 0);
	REQUIRE(tWins == 0);
}

TEST_CASE("Test win from O")
{
	TicTacToe game;
	TicTacToeManager managerGames;
	game.start_game("O");
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(8);
	game.mark_board(2);
	game.mark_board(9);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(6);
	game.mark_board(4);

	int xWins;
	int oWins;
	int tWins;

	managerGames.save_game(game);
	game.display_board();
	managerGames.get_winner_total(oWins, xWins, tWins);
	cout<<"\nX has won: "<<xWins;
	cout<<"\nO has won: "<<oWins;
	cout<<"\nT has won: "<<tWins<<"\n";
	REQUIRE(xWins == 0);
	REQUIRE(oWins == 1);
	REQUIRE(tWins == 0);
}

TEST_CASE("Test win from T")
{
	TicTacToe game;
	TicTacToeManager managerGames;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(7);
	game.mark_board(6);
	game.mark_board(9);
	game.mark_board(8);

	int xWins;
	int oWins;
	int tWins;

	managerGames.save_game(game);
	game.display_board();
	managerGames.get_winner_total(oWins, xWins, tWins);
	cout<<"\nX has won: "<<xWins;
	cout<<"\nO has won: "<<oWins;
	cout<<"\nT has won: "<<tWins<<"\n";
	REQUIRE(xWins == 0);
	REQUIRE(oWins == 0);
	REQUIRE(tWins == 1);
} */


//TicTacToe3 Test

TEST_CASE("Test get win from X with TicTacToe3")
{
	std::unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	TicTacToeManager managerGames;
	game->start_game("X");
	game->mark_board(7);
	game->mark_board(1);
	game->mark_board(8);
	game->mark_board(2);
	game->mark_board(9);
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(6);
	game->mark_board(4);

	int xWins;
	int oWins;
	int tWins;

	game->display_board();
	managerGames.save_game(game);
	managerGames.get_winner_total(oWins, xWins, tWins);
	cout<<"\nX has won: "<<xWins;
	cout<<"\nO has won: "<<oWins;
	cout<<"\nT has won: "<<tWins<<"\n";
	REQUIRE(xWins == 1);
	REQUIRE(oWins == 0);
	REQUIRE(tWins == 0);
}

TEST_CASE("Test get win from X with TicTacToe4")
{
	std::unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	TicTacToeManager managerGames;
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(9);
	game->mark_board(4);
	game->mark_board(13);

	int xWins;
	int oWins;
	int tWins;

	game->display_board();
	managerGames.save_game(game);
	managerGames.get_winner_total(oWins, xWins, tWins);
	cout<<"\nX has won: "<<xWins;
	cout<<"\nO has won: "<<oWins;
	cout<<"\nT has won: "<<tWins<<"\n";
	REQUIRE(xWins == 1);
	REQUIRE(oWins == 0);
	REQUIRE(tWins == 0);
}