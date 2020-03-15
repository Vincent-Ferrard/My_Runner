/*
** EPITECH PROJECT, 2018
** create_nb_blocks.c
** File description:
** create_nb_block
*/

#include "main.h"

object_t create_obj_space(int i, int j)
{
	object_t obj;

	obj = create_object(
		obj, "utils/img/vide.png", 50 * i, 50 * j);
	return (obj);
}

object_t create_obj_1(int i, int j)
{
	object_t obj;

	obj = create_object(
		obj, "utils/img/block2.png", 50 * i, 50 * j);
	return (obj);
}

object_t create_obj_2(int i, int j)
{
	object_t obj;

	obj = create_object(
		obj, "utils/img/mob_spritesheet.png", 50 * i, 50 * j);
	obj.rect = create_rect(0, 0, 50, 50);
	return (obj);
}

object_t create_obj_3(int i, int j)
{
	object_t obj;

	obj = create_object(
		obj, "utils/img/mob2_spritesheet.png", 50 * i, 50 * j);
	obj.rect = create_rect(0, 0, 50, 50);
        return (obj);
}
