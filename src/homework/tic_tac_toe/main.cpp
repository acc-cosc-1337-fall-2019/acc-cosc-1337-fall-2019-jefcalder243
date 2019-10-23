#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
using std::cin;

int main() 
{
	
	TicTacToeManager manager;
	auto option = 'y';
	int choice = 0;
	do 
	{
		TicTacToe board;
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