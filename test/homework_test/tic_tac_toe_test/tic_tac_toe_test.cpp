#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test win by first column", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins second column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   second column win are user positions 2,5, and 8
vector view: 1, 4, and 7
	   */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third column", "[X wins third column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 3,6, and 9
vector view: 2, 5, and 8
	   */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row", "[X wins first row]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,2, and 3
vector view: 0, 1, and 2
	   */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second row", "[X wins second row]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 4,5, and 6
vector view: 3, 4, and 5
	   */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third row", "[X wins third row]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 7,8, and 9
vector view: 6, 7, and 8
	   */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(7);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from top left", "[X wins diagonally from top left]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,5, and 9
vector view: 0, 4, and 8
	   */
	TicTacToe board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
	board.mark_board(1);//O         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O 
	//O wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "O");
}

TEST_CASE("Test win diagonally from bottom left", "[X wins diagonally from bottom left]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 3,5, and 7
vector view: 2, 4, and 6
	   */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test for no winner")
{ /* Tic Tac Toe Board
		123
		456
		789

		board state will be:
		xox
		oox
		xxo
	   */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "C");
}

TEST_CASE("test set first player X")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
}

TEST_CASE("test set first player O")
{
	TicTacToe board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
}

TEST_CASE("test game over")
{
	TicTacToe board;
	REQUIRE(board.game_over() == false);
}