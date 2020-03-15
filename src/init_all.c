/*
** EPITECH PROJECT, 2018
** init_all.c
** File description:
** init_all
*/

#include "main.h"

sfRenderWindow *init_win()
{
	sfVideoMode mode = {1920, 1050, 32};
	sfRenderWindow *win;

	win = sfRenderWindow_create(
		mode, "My_Runner", sfResize | sfClose, NULL);
	sfRenderWindow_setFramerateLimit(win, 60);
	return (win);
}

instruct_t init_struct(object_t *player, instruct_t sf)
{
	sf.clock = sfClock_create();
	sf.check = 1;
	sf.jump = 0;
	sf.max_height = player->vector.y - 180;
	sf.score = 1;
	return (sf);
}

object_t *init_block(char **map, int line, int column)
{
	int nbr = 0;
	object_t *obj = malloc(sizeof(object_t) * (line * column + 1));

	for (int j = 0; j < line; j++) {
		for (int i = 0; i < column; i++) {
			if (map[j][i] == '3')
				obj[nbr] = create_obj_3(i, j);
			else if (map[j][i] == '2')
				obj[nbr] = create_obj_2(i, j);
			else if (map[j][i] == '1')
				obj[nbr] = create_obj_1(i, j);
		        else
				obj[nbr] = create_obj_space(i, j);
			nbr++;
		}
	}
	return (obj);
}

object_t *init_player(int x, int y, int width, int height)
{
	object_t *player = malloc(sizeof(object_t) * 1);

	player->texture = sfTexture_createFromFile(
		"utils/img/luffy_spritesheet.png", NULL);
	player->sprite = sfSprite_create();
	sfSprite_setTexture(player->sprite, player->texture, sfTrue);
	player->vector = create_vector(x, y);
	sfSprite_setPosition(player->sprite, player->vector);
	player->rect = create_rect(0, 0, width, height);
	sfSprite_setTextureRect(player->sprite, player->rect);
	return (player);
}

object_t *init_background(int i)
{
	object_t *obj = malloc(sizeof(object_t) * 8);
	int j = 0;

	for (i = 0; i < 2; i++)
		obj[i] = create_object(
			obj[i], "utils/img/sky.png", 1921 * i, 0);
	for (i = 2; i < 4; i++) {
		obj[i] = create_object(
			obj[i], "utils/img/background2.png", 1921 * j, 0);
		j++;
	}
	j = 0;
	for (i = 4; i < 6; i++) {
		obj[i] = create_object(
			obj[i], "utils/img/background1.png", 1921 * j, 10);
		j++;
	}
	obj[6] = create_object(obj[6], "utils/img/ground.png", 0, 5);
	obj[7] = create_object(obj[7], "utils/img/ground.png", 1920, 5);
	return (obj);
}
