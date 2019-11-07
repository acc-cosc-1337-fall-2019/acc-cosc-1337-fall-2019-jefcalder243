//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include "tic_tac_toe.h"
#include<vector>
#include<iostream>
#include<memory>

using std::unique_ptr;
using std::ostream;
using std::vector;

class TicTacToeManager
{
public:
	void save_game(unique_ptr<TicTacToe>& game);
	const vector<std::unique_ptr<TicTacToe>>& get_games();
	void get_winner_totals(int& x, int& o, int& c);
	unique_ptr<TicTacToe> get_game(int game_type);
	friend ostream& operator<<(ostream& out, const TicTacToeManager& m);
private:
	void update_winner_count(string winner);
	vector<unique_ptr<TicTacToe>> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
};

#endif // !TIC_TAC_TOE_MANAGER_H