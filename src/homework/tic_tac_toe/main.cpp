#include "tic_tac_toe.h"
using std::cin;

int main() 
{
	TicTacToe board;
	auto option = 'y';
	int choice = 0;
	do 
	{

		board.start_game("X");
		while (board.game_over() == false)
		{
			cin >> board;
			cout << board;

		}

		cout << "Enter y to play again. \n";
		cin >> option;
	} while (option == 'y' || option == 'Y');

	return 0;
}