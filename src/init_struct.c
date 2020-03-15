/*
** EPITECH PROJECT, 2018
** init_struct.c
** File description:
** init_struct
*/

#include "main.h"
#include "map.h"

instruct_t init_all_struct(object_t **obj, char **av)
{
	instruct_t sf;

	sf.win = init_win();
	sf.line = max_line(av[1]);
	sf.column = max_column(av[1]);
	sf.map = copy_map(av[1], sf.line, sf.column);
	obj[0] = init_block(sf.map, sf.line, sf.column);
	obj[1] = init_player(50, 800, 62, 55);
	obj[2] = init_background(0);
	sf = init_struct(obj[1], sf);
	sf = create_score(sf);
	sf = create_music(sf);
	return (sf);
}
