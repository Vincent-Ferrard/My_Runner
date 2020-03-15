/*
** EPITECH PROJECT, 2018
** map.c
** File description:
** map
*/

#include "map.h"

int max_line(char *path_map)
{
	int fd;
	int line = 0;
	char c;

	fd = open(path_map, O_RDONLY);
	while (read(fd, &c, 1)) {
		if (c == '\n')
			line++;
	}
	close(fd);
	return (line + 1);
}

int max_column(char *path_map)
{
	int fd;
	int column = 0;
	char c;

	fd = open(path_map, O_RDONLY);
	while (c != '\n') {
		read(fd, &c, 1);
		column++;
	}
	close(fd);
	return (column);
}

char **copy_map(char *path_map, int line, int column)
{
	FILE *file;
	size_t len;
	int i;
	char **map = malloc(sizeof(char *) * line);

	for (i = 0; i < line; i++)
		map[i] = malloc(sizeof(char) * column);
	file = fopen(path_map, "r");
	i = 0;
	while (getline(&map[i], &len, file) != -1)
		i++;
	map[i - 1][column] = '\0';
	fclose(file);
	return (map);
}
