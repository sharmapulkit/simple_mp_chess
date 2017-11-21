#ifndef _BOARD
#define _BOARD

class board(){
private:
	int board_size;
	char** board;
public:
	board();
	void initiate_board(piece* pieces, int num_pieces);
};

#endif _BOARD