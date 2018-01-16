/*
** EPITECH PROJECT, 2017
** compute_pos.c
** File description:
** compute pos at t + n
*/

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>
#include "../include/pong.h"

void	compute_pos(char **av, float *speed)
{
	float	pos[3];
	int	n = atoi(av[7]);

	pos[0] = get_float(av[4]) + n * speed[0];
	pos[1] = get_float(av[5]) + n * speed[1];
	pos[2] = get_float(av[6]) + n * speed[2];
	printf("At time t+%d, ball coordinates will be :\n", n);
	printf("(%.2f;%.2f;%.2f)\n", pos[0], pos[1], pos[2]);
	angle(av, speed, pos);
}
