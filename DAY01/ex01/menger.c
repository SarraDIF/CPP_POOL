//
// Created by BlueSocket on 30/07/2017.
//

#include    <stdio.h>

int         menger(int size, int lvl, int x, int y)
{
	int     i;
	int     j;

	i = -1;
	printf("%03d %03d %03d\n", (size / 3), (size / 3) + x, (size / 3) + y);
	if (lvl > 1)
	{
		while (++i < 3)
		{
			j = -1;
			while (++j < 3)
			{
				if (i != 1 || j != 1)
					menger((size / 3), lvl - 1, i * (size / 3) + x, j * (size / 3) + y);
			}
		}
	}
	return (0);
}