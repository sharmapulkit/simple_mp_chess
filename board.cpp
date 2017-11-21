#include "coordinates.h"
#include "piece.h"
#include "board.h"

board::board(){
	board_size = 8;
	_board = new piece*[board_size];
	coordinates p_temp;
	for (int i = 0; i < board_size; i++){
		_board[i] = new piece[board_size];
		for (int j = 0; j < board_size; j++){
			_board[i][j] = piece('E', true, p_temp = (coordinates) {i, j});
		}
	}
}

bool board::check_bounds(coordinates c){
	if (c.x >= 0 && c.x < 8 && c.y >= 0 && c.y < 8)
		return true;
	else
		return false;
}

void board::initiate_board(piece* pieces, int num_pieces){
	for (int i = 0; i < num_pieces; i++){
		piece p = pieces[i];
		_board[p.get_position().x][p.get_position().y] = p; 
	}
}

void board::move_piece(piece p, coordinates c){
	coordinates current_position = p.get_position();
	if (check_bounds(c)){
		if (p.move_piece(c)){
			_board[c.x][c.y] = p;
			p.set_position(c);
		}
	}
}