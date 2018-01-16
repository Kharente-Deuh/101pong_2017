/*
** EPITECH PROJECT, 2017
** get_float.c
** File description:
** convert a string into a float
*/

#include <stdlib.h>

float	get_float(char *str)
{
	float	res = strtof(str, NULL);

	return (res);
}
