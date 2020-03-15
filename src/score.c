/*
** EPITECH PROJECT, 2018
** score.c
** File description:
** score
*/

#include "main.h"

instruct_t create_score(instruct_t sf)
{
	sf.font = sfFont_createFromFile("utils/police/arial.ttf");
	sf.text = sfText_create();
	sfText_setString(sf.text, "0");
	sfText_setFont(sf.text, sf.font);
	sfText_setCharacterSize(sf.text, 50);
	return (sf);
}

int set_score(sfText *text, int score)
{
	char *str = convert_score(score);

	sfText_setString(text, str);
	score += 1;
	return (score);
}

char *convert_score(int score)
{
	char *str = malloc(sizeof(char) * 9);
	char *rev_str = malloc(sizeof(char) * 9);
	int i = 0;
	int j = 0;

	while (score > 0) {
		str[i] = (score % 10) + 48;
		score /= 10;
		i++;
	}
	str[i] = '\0';
	while (i > 0) {
		rev_str[j] = str[i - 1];
		i--;
		j++;
	}
	rev_str[j] = '\0';
	return (rev_str);
}
