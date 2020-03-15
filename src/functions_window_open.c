/*
** EPITECH PROJECT, 2018
** functions_window_open.c
** File description:
** functions_window_open
*/

#include "main.h"

instruct_t func_win_open(object_t **obj, instruct_t sf)
{
	sf.score = set_score(sf.text, sf.score);
	display(obj, sf);
	sf.check = check_status(obj, sf, sf.line * sf.column, sf.column);
	sf = all_event(sf);
	sf.win = close_win(obj, sf);
	sf.jump = jump_player(obj[1], sf.jump, sf.max_height);
	obj[0]->vector = move_block(obj[0], sf.line, sf.column);
	sf = animated_player(obj[1], obj[0], sf);
	obj[2] = parallax(obj[2]);
	if (sf.jump == 0) {
		obj[1]->vector = gravity(obj, sf.map, sf.line, sf.column);
		sf.max_height = obj[1]->vector.y - 180;
	}
	return (sf);
}
