#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>

#include "coordinates.h"
#include "piece.h"
#include "board.h"

// #include "initial_piece_declaration.cpp"

using namespace std;

board * B;

void render(){
	for (int y = 0; y < 8; y++){
		for (int x = 0; x < 8; x++){
			piece p = B->_board[x][y];
			char type = p.get_type();
			bool color = p.get_color();

			int fg_color_code = (color == true) ? 37 : 30;
			int bg_color_code = (color == true) ? 40 : 47;

			if (type == 'E')
			{
				type = '_';
				bg_color_code = 46;
			}

			printf("\033[1;%d;%dm%c\033[0m ", fg_color_code, bg_color_code, type);
		}
		cout << endl;
	}
}

int main(){
	B = new board();
	#include "initial_piece_declaration.cpp"
	B->initiate_board(INITIAL_PIECES, 32);
	render();

	return 0;
}