//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win())
	{
		set_winner();
		return true;
	}
	else if (check_board_full())
	{
		winner = "C";
		return true;
	}
	return false;
}

void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}

/*user sees 1234 computer sees 0123*/
void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;

	set_next_player();
	
}

string TicTacToe::get_player() const
{
	return next_player;
}


void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}

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

void TicTacToe::clear_board()
{
	for (int i=0; i < 9; i++)
	{
		pegs[i] = " ";
	}
}

bool TicTacToe::check_board_full()
{
	for (int i=0; i < pegs.size(); i++)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::set_winner()
{

	if (next_player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}

std::istream & operator>>(std::istream & in, TicTacToe & t)
{
	int choice = 0;
	cout << "choose a number from 1 to" << t.pegs.size() << "for player " << t.get_player() << "\n";
	in >> choice;
	t.mark_board(choice);


	return in;
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & t)
{
	if (t.pegs.size() == 9)
	{
		for (int i = 0; i < 3; i++)
		{
			out << t.pegs[i * 3] << "|" << t.pegs[i * 3 + 1] << "|" << t.pegs[i * 3 + 2] << "\n";
		}
	}
	if (t.pegs.size() == 16)
	{
		for (int i = 0; i < 4; i++)
		{
			out << t.pegs[i * 4] << "|" << t.pegs[i * 4 + 1] << "|" << t.pegs[i * 4 + 2] << "|" << t.pegs[i * 4 + 3] << "\n";
		}
	}
	return out;
}


string TicTacToe::get_winner() const
{
	return winner;
}