#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>

#include "coordinates.h"
#include "piece.h"
#include "board.h"

#include "initial_piece_declaration.cpp"

using namespace std;

board * B;

void render(){
	cout << endl;
	for (int y = 0; y < 8; y++){
		for (int x = 0; x < 8; x++){
			piece * p = B->get_piece((coordinates) {x, y});
			char type = p->get_type();
			bool color = p->get_color();

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

int current_player;

int main(){
	//Initialization
	B = new board();
	B->initiate_board(INITIAL_PIECES, 32);
	int player_id;
	bool valid_player;
	char new_or_not;
	cout << "New Player (Y/N) : ";
	cin >> new_or_not;
	if (new_or_not == 'Y' || new_or_not == 'y'){
		B->add_player(B->get_num_active_players() + 1);
		current_player = B->get_num_active_players() - 1;
		valid_player = true;
		render();
	}
	else{
		cin >> current_player;
		if (current_player < B->get_num_active_players()){
			valid_player = true;
			render();
		}
	}

	while(valid_player){
		if (B->get_player_color(current_player) == B->whose_turn()){
			// char current_color[] = "White";
			char white[] = "White";
			char black[] = "Black";
			char * current_color = (B->whose_turn()) ? white : black;

			printf("\n %s Turn : \n", current_color);
			
			coordinates From;
			cout << "From : X Y - ";
			cin >> From.x;
			cin >> From.y;

			coordinates To;
			cout << "To : X Y - ";
			cin >> To.x;
			cin >> To.y;

			if (B->move_piece_on_board(From, To)){
				B->change_turn();
				render();
			}
			else
				cout << "Invalid Move" << endl;
		}
	}

	return 0;
}