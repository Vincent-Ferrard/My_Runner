/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** struct header
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include "main.h"

typedef struct object {
	sfSprite *sprite;
	sfTexture *texture;
	sfVector2f vector;
	sfIntRect rect;
} object_t;

typedef struct instruct {
	sfRenderWindow *win;
	sfMusic *music;
	sfSound *sound;
	sfSoundBuffer *buffer;
	sfEvent event;
	sfClock *clock;
	sfText *text;
	sfFont *font;
	int jump;
	int max_height;
	int score;
	int line;
	int column;
	char **map;
	int check;
} instruct_t;

#endif
