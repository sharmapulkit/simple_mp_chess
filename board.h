#ifndef _BOARD
#define _BOARD

#include "piece.h"

#define MAX_PLAYERS_SUPPORTED 10

//const static piece * Empty_piece = new piece('E', true, (coordinates) {-1, -1});

class board{
private:
	piece *** _board;
	int board_size;
	bool turn;	/* 0:Black; 1:White	*/
	bool * player_colors;
	int num_active_players; // Max supported players = 10
public:
	board();
	bool check_bounds(coordinates c);
	void initiate_board(piece pieces[], int num_pieces);
	bool move_piece(piece * p, coordinates c);
	bool move_piece_on_board(coordinates F, coordinates T);
	
	// getters
	bool whose_turn();
	piece * get_piece(coordinates c);
	bool get_player_color(int player_id);
	int get_num_active_players();

	// setters
	void change_turn();
	bool add_player(bool color);
	void set_num_active_players(int a);
};

#endif