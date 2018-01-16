/*
** EPITECH PROJECT, 2017
** error_conditions.c
** File description:
** error conditions
*/

#include <stdio.h>

int	verif_av(int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	while (i < ac) {
		if (av[i][0] == '\0') {
			printf("%s\n", "empty argument");
			return (84);
		}
		if (av[i][0] == '-')
			j++;
		while (av[i][j]) {
			if ('0' > av[i][j] || av[i][j] > '9') {
				if ((av[i][j] != '.') || (av[i][j] == '.' &&
							(('0' > av[i][j - 1] &&
							  av[i][j -1] > '9') ||
							 ('0' > av[i][j + 1] ||
							  av[i][j + 1] > '9'))))
				{
					return (84);
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int	error_conditions(int ac, char **av)
{
	if (ac != 8) {
		printf("%s\n", "ac != 8");
		return (84);
	}
	return (verif_av(ac, av));
}
