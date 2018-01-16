/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main of pong
*/

#include "../include/pong.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (error_conditions(ac, av) == 84) {
		printf("%s\n", "Error");
		return (84);
	}
	speed_vector(av);
	return (0);
}
