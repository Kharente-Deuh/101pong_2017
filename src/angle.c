/*
** EPITECH PROJECT, 2017
** angle.c
** File description:
** compute the angle insidance
*/

#include <stdio.h>
#include <math.h>
#include "../include/pong.h"

void	angle(char **av, float *speed, float *pos)
{
	float	result;
	float	z = get_float(av[6]);
	float	x = get_float(av[4]);
	float	n0 = (-1.00 * pos[2]) / speed[2];
	float	v = sqrt(pow(speed[0], 2)  + pow(speed[1], 2) +
			pow(speed[2], 2));

	if (speed[2] != 0 && ((-z)/speed[2]) >= 0 && x != 0) {
		result = 90 - 180 / M_PI * acos(speed[2] / v);
		if (result < 0)
			result = -result;
		printf("The incidence angle is :\n%.2f degrees\n", result);
	} else
		printf("The ball won't reach the bat.\n");
}
