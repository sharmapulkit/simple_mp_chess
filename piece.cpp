#include <cmath>
#include "coordinates.h"
#include "piece.h"

piece::piece(){
	type='P';
	color=false;
	in_play=false;
	position.x=0;
	position.y=0;
}

piece::piece(char t, bool c, coordinates p){
	type = t;
	color = c;
	in_play = true;
	position.x = p.x;
	position.y = p.y;
}

//Getters
char piece::get_type(){
	return type;
}

bool piece::get_color(){
	return color;
}

bool piece::get_play_status(){
	return in_play;
}

coordinates piece::get_position(){
	return position;
}

//Setters
void piece::set_type(char t){
	type = t;
}
void piece::set_color(bool c){
	color = c;
}
void piece::set_play_status(bool s){
	in_play = s;
}
void piece::set_position(coordinates p){
	position.x = p.x;
	position.y = p.y;
}

bool piece::move_piece(coordinates p){
	if (p.x == position.x && p.y == position.y)
		return false;
	else{
		switch (type){
			case 'R':
				return (p.x == position.x || p.y == position.y) ? true : false;
				break;
			case 'N':
				if (p.x - position.x )
				break;
			case 'B':
				return (p.x - position.x == p.y - position.y) ? true : false;
				break;
			case 'Q':
				if (p.x == position.x || p.y == position.y || p.x - position.x == p.y - position.y)
					return true;
				else
					return false;
				break;
			case 'K':
				if (std::abs(p.x - position.x) <= 1 && std::abs(p.y - position.y) <=1)
					return true;
				else
					return false;
				break;
			case 'P':
				if (p.x == position.x){
					if (position.y == 1){
						if (p.y - position.y <= 2 && p.y - position.y > 0)
							return true;
						else
							return false;
					}
					else if (position.y == 6){
						if (position.y - p.y <= 2 && position.y - p.y > 0)
							return true;
						else
							return false;
					}
					else{
						if (position.y - p.y == 1 && color || position.y - p.y == -1 && !color)
							return true;
						else
							return false;
					}
				}
				else{
					return false;
				}
				break;
			case 'E':
				return false;
			default:
				return false;
				break;
		}
	}
}