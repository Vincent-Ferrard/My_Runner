/*
** EPITECH PROJECT, 2017
** map.h
** File description:
** map header
*/

#ifndef MAP_H_
#define MAP_H_

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int max_line(char *);
int max_column(char *);
char **copy_map(char *, int, int);

#endif
