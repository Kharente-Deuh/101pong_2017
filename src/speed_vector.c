/*
** EPITECH PROJECT, 2017
** speed vector
** File description:
** calcul the speed vector
*/

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>
#include "../include/pong.h"

float speed_calcul(float a, float b)
{
	float result = b - a;

	return (result);
}

void	speed_vector(char **av)
{
	float x = 0;
	float y = 0;
	float z = 0;
	float speed[3];

	speed[0] = speed_calcul(get_float(av[1]), get_float(av[4]));
	speed[1] = speed_calcul(get_float(av[2]), get_float(av[5]));
	speed[2] = speed_calcul(get_float(av[3]), get_float(av[6]));
	printf("The speed vector coordinates are :\n(%.2f;%.2f;%.2f)\n",
			speed[0], speed[1], speed[2]);
	compute_pos(av, speed);
}
