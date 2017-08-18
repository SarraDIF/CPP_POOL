//
// Created by BlueSocket on 30/07/2017.
//

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int	menger(int a, int lvl, int x, int y);

int             my_getnbr(char *str)
{
	int           i;
	int           n;
	int           nb;

	i = 0;
	n = 1;
	nb = 0;
	while (str[i] != 0 && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i++] == '-')
			n *= -1;
	}
	while (isdigit(str[i]))
		nb = nb * 10 + str[i++] - 48;
	return (nb * n);
}

int	checker(int size, int lvl)
{
	int	i;

	i = 0;
	if (size <= 0 && lvl <= 0)
		exit (84);
	while (size > 1)
	{
		if ((size % 3) == 0)
			size /= 3;
		else
			exit (84);
		i++;
	}
	if (lvl > i)
		exit (84);
	return (i);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		checker(my_getnbr(av[1]), my_getnbr(av[2]));
		menger(my_getnbr(av[1]), my_getnbr(av[2]), 0, 0);
	}
	else
		exit (84);
	return (0);
}