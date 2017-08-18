//
// Created by BlueSocket on 30/07/2017.
//

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
//
//int	menger(int a, int lvl, int x, int y);
//
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
//
//int	main(int ac, char **av)
//{
//	if (ac == 3)
//	{
//		checker(my_getnbr(av[1]), my_getnbr(av[2]));
//		menger(my_getnbr(av[1]), my_getnbr(av[2]), 0, 0);
//	}
//	else
//		exit (84);
//	return (0);
//}





#include	<stdlib.h>
#include	<unistd.h>
#include	<fcntl.h>
#include	<string.h>
#include	<ctype.h>
#include	<stdio.h>

#include	"bitmap.h"

void		menger(uint32_t **img, int size, int level);

int			main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(STDERR_FILENO, "menger_face file_name size level\n", 33);
		return (EXIT_FAILURE);
	}
	int					size = my_getnbr(argv[2]);
	int					level = my_getnbr(argv[3]);
	t_bmp_header		header;
	t_bmp_info_header	info;

	make_bmp_header(&header, size);
	make_bmp_info_header(&info, size);

	uint32_t			*img = malloc(size * size * sizeof(uint32_t));
	uint32_t			**tab_img = malloc(size * sizeof(uint32_t *));

	for (int i = 0; i < size; i++)
	{
		tab_img[i] = img + (i * size);
		for(int j = 0; j < size; j++)
		{
			tab_img[i][j] = 0;
		}
	}
	menger(tab_img, size, level);

	int					fd = open(argv[1], O_CREAT | O_TRUNC | O_WRONLY, 0644);

	write(fd, &header, sizeof(header));
	write(fd, &info, sizeof(info));
	write(fd, img, size * size * sizeof(uint32_t));
	close(fd);
	return (EXIT_SUCCESS);
}
