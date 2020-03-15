/*
** EPITECH PROJECT, 2018
** init.h
** File description:
** init header
*/

#ifndef INIT_H_
#define INIT_H_

sfVector2f create_vector(int, int);
sfIntRect create_rect(int, int, int, int);
object_t create_object(object_t, char *, int, int);
instruct_t create_music(instruct_t);
instruct_t create_score(instruct_t);

object_t create_obj_space(int, int);
object_t create_obj_1(int, int);
object_t create_obj_2(int, int);
object_t create_obj_3(int, int);

sfRenderWindow *init_win();
instruct_t init_struct(object_t *, instruct_t);
instruct_t init_all_struct(object_t **, char **);
object_t *init_block();
object_t *init_player(int, int, int, int);
object_t *init_background(int);

#endif
