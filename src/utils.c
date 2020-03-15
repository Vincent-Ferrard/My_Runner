/*
** EPITECH PROJECT, 2018
** utils.c
** File description:
** utils
*/

#include "utils.h"

void my_putstr(char const *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		my_putchar(str[i]);
}

void my_putchar(char c)
{
	write(1, &c, 1);
}
