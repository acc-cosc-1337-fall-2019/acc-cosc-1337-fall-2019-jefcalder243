#include<string>
#include<vector>
#include<iostream>

#ifndef TIC_TAC_TOE_H//header guard
#define TIC_TAC_TOE_H

using std::cout;
using std::string;
using std::vector;
//h
//represents one game of tictactoe
class TicTacToe 
{
public:
	TicTacToe(int s) :size_vector(s*s, " ") {}
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;
	friend std::istream & operator >>(std::istream & in, TicTacToe & t);
	friend std::ostream & operator <<(std::ostream & out, const TicTacToe & t);

	vector<string> pegs{ 9, " " };//initializer
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
private:
	int size = 3;
	vector<string> size_vector{ size*size," " };
	string next_player;
	string winner;
	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();

protected:
	
};
#endif// TIC_TAC_TOE_H