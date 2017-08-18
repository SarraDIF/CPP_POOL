#include	<stdio.h>


//# define	MIN(x, y) ((x) < (y) ? (x) : (y))
//
//int			pyramid_run(int size, int **map, int current, int pos);
//
//int			pyramid_path(int size, int **map)
//{
//	return (pyramid_run(size, map, 0, 0));
//}
//
//int			pyramid_run(int size, int **map, int current, int pos)
//{
//	if (current == size - 1)
//	{
//		return (MIN(map[current][pos], map[current][pos + 1]));
//	}
//	return (MIN(pyramid_run(size, map, current + 1, pos), pyramid_run(size, map, current + 1, pos + 1)) + map[current][pos]);
//}

//        0
//       7 4
//      2 3 6
//     8 5 9 3


// ----------------------------------------------------------------------------------------------------------

int pyramid_path(int size, int **map)
{
	int i;
	int j;
	int way;

	if (size == 1)
		return (map[0][0]);
	j = 0;
	i = 0;
	way = map[0][0];
	while (++j < size)
	{
		if (map[j][i] <= map[j][i + 1])
			way += map[j][i];
		else
			way += map[j][i++ + 1];
	}
	return (way);
}

//int		pyramid_path(int size, int **map)
//{
//	int	i;
//	int	j;
//
//	i = 0;
//	j = size - 1;
//	if (size == 1)
//		return (map[0][0]);
//	while (j >= 0)
//	{
//		i = 0;
//		while (i + 1 <= size)
//		{
//			if (map[j + 1][i] <= map[j + 1][i + 1])
//			{
//				map[j][i] += map[j + 1][i];
//			}
//			else
//				map[j][i] += map[j + 1][i + 1];
//			i++;
//		}
//		size--;
//		j--;
//	}
//	return (map[0][0]);
//}

// ----------------------------------------------------------------------------------------------------------

//int		len;
//
//int		comb(int size, int **map, int step, int col, int stock)
//{
//	if (size == 0)
//	{
//		if (stock < len)
//			len = stock;
//		return (0);
//	}
//	stock += map[step][col];
//	step++;
//	comb(size - 1, map, step, col, stock);
//	return (comb(size - 1, map, step, col + 1, stock));
//}
//
//int		pyramid_path(int size, int **map)
//{
//	int	step = 0;
//	int	col = 0;
//	int	stock = 0;
//
//	len = 999999;
//	comb(size, map, step, col, stock);
//	return (len);
//}