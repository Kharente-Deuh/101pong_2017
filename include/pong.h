/*
** EPITECH PROJECT, 2017
** include/pong.h
** File description:
** pong.h
*/

#ifndef __PONG_H__
# define __PONG_H__

void	speed_vector(char **);
void	angle(char **, float *, float *);
void	compute_pos(char **, float *);
int	error_conditions(int, char **);
float	get_float(char *);

#endif
