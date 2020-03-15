/*
** EPITECH PROJECT, 2018
** animate.c
** File description:
** animate
*/

#include "main.h"

instruct_t animated_player(object_t *player, object_t *block, instruct_t sf)
{
	sfTime time;
	float seconds;

	time = sfClock_getElapsedTime(sf.clock);
	seconds = time.microseconds / 1000000.0;
	if (seconds > 0.15) {
		if (player->rect.left >= 434)
			player->rect.left = 0;
		else
			player->rect.left += 62;
		sfSprite_setTextureRect(player->sprite, player->rect);
		sf = animated_mob(block, sf, sf.line, sf.column);
		sfClock_restart(sf.clock);
	}
	return (sf);
}

instruct_t animated_mob(object_t *block, instruct_t sf, int line, int column)
{
	for (int i = 0; i < line * column; i++)
		if (sf.map[i / column][i - (column * (i / column))] == '2'
		    || sf.map[i / column][i - (column * (i / column))] == '3') {
			if (block[i].rect.left >= 150)
				block[i].rect.left = 0;
			else
				block[i].rect.left += 50;
			sfSprite_setTextureRect(block[i].sprite, block[i].rect);
		}
	return (sf);
}
