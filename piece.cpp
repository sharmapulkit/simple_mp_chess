#include "piece.h"

piece::piece(char type){
	type = t;
	color = false;
	in_play = true;
	position.x = 0;
	position.y = 0;
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
void set_type(char t){
	type = t;
}
void set_color(bool c){
	color = c;
}
void set_play_status(bool s){
	in_play = s;
}
void set_position(coordinates p){
	position.x = p.x;
	position.y = p.y;
}

bool move_piece(coordinates p){
	if (p.x == position.x && p.y == position.y){
		return false;
	else{
		switch type{
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
				if (p.x == position.x || p.y == position.y || p.x - positon.x == p.y - position.y)
					return true;
				else
					return false;
				break;
			case 'K':
				if (abs(p.x - position.x) <= 1 && abs(p.y - position.y) <=1)
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
						if (position.y - p.y <= 2 && position.py - p.y > 0)
							return true;
						else
							return false;
					}
					else{
						if (position.y - p.y == 1 && color || position.y - p.y = -1 && !color)
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
				return true;
			default:
				return false;
				break;
		}
	}
}