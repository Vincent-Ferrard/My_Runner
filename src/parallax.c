/*
** EPITECH PROJECT, 2018
** parallax.c
** File description:
** parallax
*/

#include "main.h"

object_t *parallax(object_t *obj)
{
	int i = 0;

	for (i = 0; i < 8; i++) {
		if (obj[i].vector.x + 1922 <= 0)
			obj[i].vector.x = 1921;
		if (i == 0 || i == 1)
			obj[i].vector.x -= 0.5;
		else if (i == 2 || i == 3)
			obj[i].vector.x -= 1;
		else
			obj[i].vector.x -= 2;
		sfSprite_setPosition(obj[i].sprite, obj[i].vector);
	}
	return (obj);
}
