/*
** EPITECH PROJECT, 2018
** conditions_player.c
** File description:
** conditions_player
*/

#include "main.h"

sfVector2f gravity(object_t **obj, char **map, int line, int column)
{
	int i;

	for (i = 0; i < column * line; i++) {
		if ((map[i / column][i - (column * (i / column))] != '1'
		     && map[i / column][i - (column * (i / column)) + 1] != '1')
		    && (obj[1]->vector.y + 55 > obj[0][i].vector.y
			&& obj[1]->vector.y < obj[0][i].vector.y)
		    && (obj[1]->vector.x <= obj[0][i].vector.x + 50
			&& obj[1]->vector.x >= obj[0][i].vector.x)) {
			obj[1]->vector.y += 5;
			sfSprite_setPosition(obj[1]->sprite, obj[1]->vector);
			break;
		}
	}
	return (obj[1]->vector);
}

int check_status(object_t **obj, instruct_t sf, int max_block, int column)
{
	for (int i = 0; i < max_block; i++) {
		if (sf.map[i / column][i - (column * (i / column))] != '\n'
		    && sf.map[i / column][i - (column * (i / column))] != ' '
		     && (obj[1]->vector.y + 55 > obj[0][i].vector.y + 15
			 && obj[1]->vector.y < obj[0][i].vector.y + 35)
		     && (obj[1]->vector.x < obj[0][i].vector.x + 35
			 && obj[1]->vector.x + 62 > obj[0][i].vector.x + 15)) {
			sf.check = -1;
		}
		if (sf.map[i / column][i - (column * (i / column))] == '\n'
		    && (obj[1]->vector.y + 55 > obj[0][i].vector.y + 15
			&& obj[1]->vector.y < obj[0][i].vector.y + 35)
		    && (obj[1]->vector.x < obj[0][i].vector.x + 35
			&& obj[1]->vector.x + 62 > obj[0][i].vector.x + 15)) {
			sf.check = 0;
		}
	}
	if (obj[1]->vector.y + 55 >= 955)
		sf.check = -1;
	return (sf.check);
}
