#ifndef _PIECE
#define _PIECE

/* type:
* R:Rook
* N:Knight
* B:Bishop
* Q:Queen
* K:King
* P:Pawn
* E:Empty (Virtual Piece)
*/

/*
* 0 : Black
* 1 : White
*/

class piece{
private:
	char type;
	bool color;
	bool in_play;
	coordinates position;
public:
	piece();
	piece(char t, bool c, coordinates p);

	//Getter
	char get_type();
	bool get_color();
	bool get_play_status();
	coordinates get_position();

	//Setter
	void set_type(char t);
	void set_color(bool c);
	void set_play_status(bool s);
	void set_position(coordinates p);

	bool move_piece(coordinates p);
};

#endif