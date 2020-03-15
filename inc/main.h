/*
** EPITECH PROJECT, 2017
** main.h
** File description:
** main header
*/

#ifndef MAIN_H_
#define MAIN_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>

#include "struct.h"
#include "animate.h"
#include "init.h"
#include "move.h"
#include "utils.h"

instruct_t all_event(instruct_t);
sfRenderWindow *close_win(object_t **, instruct_t);
int jump_player(object_t *, int, int);

sfVector2f gravity(object_t **, char **, int, int);
int check_status(object_t **, instruct_t, int, int);

int set_score(sfText *, int);
char *convert_score(int);

instruct_t func_win_open(object_t **, instruct_t);
void display(object_t **, instruct_t);
void destroy_all(object_t **, instruct_t);

int error_step(int, char **);

#endif
