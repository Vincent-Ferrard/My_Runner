/*
** EPITECH PROJECT, 2018
** move.c
** File description:
** move
*/

#include "main.h"

sfVector2f move_block(object_t *block, int line, int column)
{
	int i;

	for (i = 0; i < line * column; i++) {
		block[i].vector.x -= 2;
		sfSprite_setPosition(block[i].sprite, block[i].vector);
	}
	return (block->vector);
}
