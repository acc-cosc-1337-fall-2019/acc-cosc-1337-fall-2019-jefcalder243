#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using std::cin;

int main() 
{
	//TicTacToe3 three;
	TicTacToeManager manager;
	auto option = 'y';
	int choice = 0;
	int dim;
	do 
	{
		cout << "Would you like to play with dimensions of 3 or 4?";
		cin >> dim;
		TicTacToe* board;
		if (dim == 3)
		{
			board = new TicTacToe3;
		}
		else
		{
			board = new TicTacToe4;
		}
		board->start_game("X");
		while (board->game_over() == false)
		{
			cin >> *board;
			cout << *board;

		}

		manager.save_game(*board);

		cout << "Enter y to play again. \n";
		cin >> option;
	} while (option == 'y' || option == 'Y');

	cout << "History: \n";
	cout << manager;
	
	return 0;
}