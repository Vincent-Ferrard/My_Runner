/*
** EPITECH PROJECT, 2018
** error.c
** File description:
** error
*/

#include "main.h"

int error_step(int ac, char **av)
{
	if (ac != 2) {
		my_putstr("Bad number of arguments !\n");
		return (1);
	}
	else if (ac > 1 && av[1][0] == '-' && av[1][1] == 'h') {
		my_putstr("Finite Runner created with CSFML\n\n");
		my_putstr("USAGE\n");
		my_putstr(" ./my_runner map.txt\n\n\n");
		my_putstr("OPTIONS\n -h\t\tprint the usage and quit\n\n");
		my_putstr("USER INTERACTIONS\n");
		my_putstr(" SPACE_KEY\tjump.\n");
		my_putstr(" ESC_KEY\tquit.\n");
		return (1);
	} else
		return (0);
}
