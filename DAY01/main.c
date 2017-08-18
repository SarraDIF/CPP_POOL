#include	<time.h>
#include	<ctype.h>
#include	<fcntl.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>

#include	"GNL/gnl.h"

int			follow_the_white_rabbit();
int			pyramid_path(int size, int **map);

void        print_pam(int **pam, int size)
{
	int		j = 0;
	int		k = 0;

	while (j < size - 2)
	{
		k = 0;
		int	i = 0;
		while (i < size - 3 - j)
		{
			printf(" ");
			i++;
		}
		while (k < j + 1)
		{
			printf("%d ", pam[j][k]);
			k++;
		}
		printf("\n");
		j++;
	}
	printf("\n");
	printf("SIZ ----> %d\n", size - 2);
	printf("PYR ----> %d\n", pyramid_path(size - 2, pam));
}

void        get_pam(char *av)
{
	int		j = -1;
	int		k = 0;
	int		fd = open(av, O_RDONLY);
	int		size;
	int		**pam;
	char	*buff;

	pam = malloc(sizeof(int *) * 100);
	while ((buff = get_next_line(fd)) != NULL)
	{
		printf("heere?\n");
		int	i = 0;
		k = 0;
		pam[j] = malloc(sizeof(int) * 100);
		size++;
		while (buff[i])
		{
			if (isdigit(buff[i]))
			{
				pam[j][k++] = atoi(buff + i);
				printf("--------------------> PAM[%d][%d] = %d\n", j, k-1, pam[j][k-1]);
				while (isdigit(buff[i++]));
			}
			i++;
		}
		j++;
	}
	print_pam(pam, size);
}

#include	<fcntl.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<string.h>

#include	"ex02/bitmap.h"
#include	"ex03/drawing.h"

//int			draw_sqare(void)
//{
//	t_bmp_header		header;
//	t_bmp_info_header	info;
//	unsigned int		*buffer;
//	unsigned int		**img;
//	t_point				p = {0 ,0};
//	size_t				size = 64;
//	int					d;
//
//	/* Creates a two−dimensional array . */
//	buffer = malloc(size * size * sizeof(*buffer));
//	img = malloc(size * sizeof(*img));
//	memset(buffer, 0, size * sizeof (*buffer));
//
//	for (size_t i = 0; i < size; ++i)
//		img[ i ] = buffer + i * size;
//
//	make_bmp_header(&header, size);
//	make_bmp_info_header(&info, size);
//	draw_square(img, &p, size, 0x0000FFFF);
//	p.x = 10;
//	p.y = 10;
//	draw_square(img, &p, 22, 0x00FF0000);
//	d = open("square.bmp", O_CREAT | O_TRUNC | O_WRONLY, 0644);
//	write(d, &header, sizeof(header));
//	write(d, &info, sizeof(info));
//	write(d, buffer, size * size * sizeof(*buffer));
//	close(d);
//	return (EXIT_SUCCESS);
//}

int			main(int ac, char **av)
{
//	srandom(time(0));
//	follow_the_white_rabbit();

	get_pam(av[1]);
//	draw_sqare();
	return (0);
}