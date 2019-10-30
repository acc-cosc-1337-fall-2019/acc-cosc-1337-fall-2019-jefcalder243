#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using std::cin;

int main() 
{
	
	TicTacToeManager manager;
	auto option = 'y';
	int choice = 0;
	do 
	{
		int dim = 0;
		cout << "Would you like to play with dimensions of 3 or 4?";
		cin >> dim;
		TicTacToe3 board;
		if (dim = 3)
		{
			TicTacToe3 board;
		}
		if (dim = 4)
		{
			TicTacToe4 board;
		}
		board.start_game("X");
		while (board.game_over() == false)
		{
			cin >> board;
			cout << board;

		}

		manager.save_game(board);

		cout << "Enter y to play again. \n";
		cin >> option;
	} while (option == 'y' || option == 'Y');

	cout << "History: \n";
	cout << manager;
	
	return 0;
}