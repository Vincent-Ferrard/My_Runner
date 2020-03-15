/*
** EPITECH PROJECT, 2018
** music.c
** File description:
** music
*/

#include "main.h"

instruct_t create_music(instruct_t sf)
{
	sf.music = sfMusic_createFromFile(
		"utils/music/one_piece_share_the_world.ogg");
	sf.sound = sfSound_create();
	sf.buffer = sfSoundBuffer_createFromFile(
		"utils/music/jump_sound.ogg");
	sfSound_setBuffer(sf.sound, sf.buffer);
	sfMusic_play(sf.music);
	sfMusic_setLoop(sf.music, 1);
	return (sf);
}
