/*
** EPITECH PROJECT, 2018
** display.c
** File description:
** display
*/

#include "main.h"

void display(object_t **obj, instruct_t sf)
{
	int i;

	sfRenderWindow_clear(sf.win, sfBlack);
	for (i = 0; i < 8; i++)
		sfRenderWindow_drawSprite(sf.win, obj[2][i].sprite, NULL);
	for (i = 0; i < sf.line * sf.column; i++)
		sfRenderWindow_drawSprite(sf.win, obj[0][i].sprite, NULL);
	sfRenderWindow_drawSprite(sf.win, obj[1]->sprite, NULL);
	sfRenderWindow_drawText(sf.win, sf.text, NULL);
	sfRenderWindow_display(sf.win);
}

void destroy_all(object_t **obj, instruct_t sf)
{
	int i = 0;

	free(sf.map);
	for (i = 0; i < sf.line * sf.column; i++) {
		sfSprite_destroy(obj[0][i].sprite);
		sfTexture_destroy(obj[0][i].texture);
	}
	for (i = 0; i < 8; i++) {
		sfSprite_destroy(obj[2][i].sprite);
		sfTexture_destroy(obj[2][i].texture);
	}
	sfSprite_destroy(obj[1]->sprite);
	sfTexture_destroy(obj[1]->texture);
	sfText_destroy(sf.text);
	sfFont_destroy(sf.font);
	sfSoundBuffer_destroy(sf.buffer);
	sfSound_destroy(sf.sound);
	sfMusic_destroy(sf.music);
	sfRenderWindow_destroy(sf.win);
}
