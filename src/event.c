/*
** EPITECH PROJECT, 2018
** event.c
** File description:
** event
*/

#include "main.h"

instruct_t all_event(instruct_t sf)
{
	while (sfRenderWindow_pollEvent(sf.win, &sf.event)) {
		if (sf.event.type == sfEvtKeyReleased) {
			switch (sf.event.key.code) {
			case sfKeyEscape:
				sfRenderWindow_close(sf.win);
				break;
			case sfKeySpace:
				sfSound_play(sf.sound);
				sf.jump = 1;
				break;
			default:
				break;
			}
		}
	}
	return (sf);
}

sfRenderWindow *close_win(object_t **obj, instruct_t sf)
{
	if (sf.check == 0 || sf.check == -1) {
		if (sf.check == -1)
			obj[0][0].texture = sfTexture_createFromFile(
				"utils/img/loose.png", NULL);
		else
			obj[0][0].texture = sfTexture_createFromFile(
				"utils/img/win.png", NULL);
		sfSprite_setTexture(
			obj[0][0].sprite, obj[0][0].texture, sfTrue);
		obj[0][0].vector.x = 800;
		obj[0][0].vector.y = 500;
		sfSprite_setPosition(obj[0][0].sprite, obj[0][0].vector);
		display(obj, sf);
		while (sf.event.type != sfEvtKeyReleased)
			while (sfRenderWindow_pollEvent(sf.win, &sf.event));
		sfRenderWindow_close(sf.win);
	}
	return (sf.win);
}

int jump_player(object_t *player, int jump, int max_height)
{
	if (jump == 1) {
		player->vector.y -= 5;
		sfSprite_setPosition(player->sprite, player->vector);
		if (player->vector.y <= max_height)
			jump = 0;
	}
	return (jump);
}
