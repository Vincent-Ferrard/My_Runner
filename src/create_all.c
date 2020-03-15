/*
** EPITECH PROJECT, 2018
** create_all.c
** File description:
** create_all
*/

#include "main.h"

sfVector2f create_vector(int x, int y)
{
	sfVector2f vector;

	vector.x = x;
	vector.y = y;
	return (vector);
}

sfIntRect create_rect(int left, int top, int width, int height)
{
	sfIntRect rect;

	rect.left = left;
	rect.top = top;
	rect.width = width;
	rect.height = height;
	return (rect);
}

object_t create_object(object_t obj, char *path_object, int x, int y)
{
	obj.texture = sfTexture_createFromFile(path_object, NULL);
	obj.sprite = sfSprite_create();
	sfSprite_setTexture(obj.sprite, obj.texture, sfTrue);
	obj.vector = create_vector(x, y);
	sfSprite_setPosition(obj.sprite, obj.vector);
	return (obj);
}
