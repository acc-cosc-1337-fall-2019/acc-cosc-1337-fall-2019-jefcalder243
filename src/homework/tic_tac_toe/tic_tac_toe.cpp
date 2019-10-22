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

	if (!game_over())
	{
		set_next_player();
	}
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
	for (std::size_t i = 0; i < 3; i ++)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6]
			&& pegs[i+6] != " ")
		{
			return true;
		}
	}
	return false;
}

bool TicTacToe::check_row_win()
{
	if (pegs[0] == pegs[1] && pegs[1] == pegs[2]
		&& pegs[2] != " " || pegs[3] == pegs[4] && pegs[4] == pegs[5]
		&& pegs[5] != " " || pegs[6] == pegs[7] && pegs[7] == pegs[8]
		&& pegs[8] != " ")
	{
		return true;
	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8]
		&& pegs[8] != " " || pegs[2] == pegs[4] && pegs[4] == pegs[6]
		&& pegs[6] != " ")
	{
		return true;
	}
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
	for (int i=0; i < 9; i++)
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
	if(check_board_full())
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
	cout << "choose a number from 1 to 9 for player " << t.get_player() << "\n";
	in >> choice;
	t.mark_board(choice);


	return in;
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & t)
{
	for (int i = 0; i < 3; i++)
	{
		out << t.pegs[i * 3] << "|" << t.pegs[i * 3 + 1] << "|" << t.pegs[i * 3 + 2] << "\n";
	}

	return out;
}


string TicTacToe::get_winner() const
{
	return winner;
}