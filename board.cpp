#include "board.h"

board::board(){
	board_size = 8;
	board = new piece*[board_size];
	for (int i = 0; i < board_size; i++){
		board[i] = new piece[board_size];
		for (int j = 0; j < board_size; j++){
			board[i][j] = piece('E');
		}
	}
}

void board::initiate_board(piece* pieces, int num_pieces){
	for (int i = 0; i < num_pieces; i++){
		piece p = pieces[i];
		board[p.position.x][p.position.y] = p; 
	}
}