#include "coordinates.h"
#include "piece.h"
#include "board.h"

board::board(){
	board_size = 8;
	_board = new piece**[board_size];
	for (int i = 0; i < board_size; i++){
		_board[i] = new piece*[board_size];
		for (int j = 0; j < board_size; j++){
			_board[i][j] = new piece('E', true, (coordinates) {i, j});
		}
	}
	num_active_players = 0;
}

bool board::check_bounds(coordinates c){
	if (c.x >= 0 && c.x < 8 && c.y >= 0 && c.y < 8)
		return true;
	else
		return false;
}

void board::initiate_board(piece pieces[], int num_pieces){
	for (int i = 0; i < num_pieces; i++){
		piece * p = &pieces[i];
		_board[p->get_position().x][p->get_position().y] = p; 
	}
	player_colors = new bool[MAX_PLAYERS_SUPPORTED];
	turn = true;
}

bool board::move_piece(piece * p, coordinates c){
	coordinates current_position = p->get_position();
	if (check_bounds(c)){
		if (p->move_piece(c)){
			_board[c.x][c.y] = p;			
			p->set_position(c);
			return true;
		}
	}
	return false;
}

bool board::move_piece_on_board(coordinates F, coordinates T){
	if (check_bounds(F) && check_bounds(T)){
		piece * P = get_piece(F);
		if (move_piece(P, T)){
			_board[F.x][F.y] = new piece('E', true, (coordinates) {F.x, F.y});
			return true;
		}
	}
	return false;
}

bool board::whose_turn(){
	return turn;
}

piece * board::get_piece(coordinates c){
	return _board[c.x][c.y];
}

bool board::get_player_color(int player_id){
	return player_colors[player_id];
}

int board::get_num_active_players(){
	return num_active_players;
}

void board::change_turn(){
	turn != turn;
}

bool board::add_player(bool color){
	if (num_active_players < MAX_PLAYERS_SUPPORTED){
		player_colors[num_active_players] = color;
		num_active_players++;
		return true;
	}
	return false;
}
void board::set_num_active_players(int a){
	num_active_players = a;
}