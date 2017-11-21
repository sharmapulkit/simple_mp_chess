#ifndef _BOARD
#define _BOARD

#include "piece.h"

class board{
private:
	int board_size;
public:
	piece** _board;
	board();
	bool check_bounds(coordinates c);
	void initiate_board(piece* pieces, int num_pieces);
	void move_piece(piece p, coordinates c);
};

#endif