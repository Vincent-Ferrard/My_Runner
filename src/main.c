/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main my_runner
*/

#include "main.h"

int main(int ac, char **av)
{
	object_t **obj = malloc(sizeof(object_t *) * 3);
	instruct_t sf;

	if (error_step(ac, av) == 1)
		return (84);
	sf = init_all_struct(obj, av);
	while (sfRenderWindow_isOpen(sf.win))
		sf = func_win_open(obj, sf);
	destroy_all(obj, sf);
	return (0);
}
