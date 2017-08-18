//
// Created by BlueSocket on 30/07/2017.
//

#include    <stdio.h>

//int         menger(int size, int lvl, int x, int y)
//{
//	int     i;
//	int     j;
//
//	i = -1;
//	printf("%03d %03d %03d\n", (size / 3), (size / 3) + x, (size / 3) + y);
//	if (lvl > 1)
//	{
//		while (++i < 3)
//		{
//			j = -1;
//			while (++j < 3)
//			{
//				if (i != 1 || j != 1)
//					menger((size / 3), lvl - 1, i * (size / 3) + x, j * (size / 3) + y);
//			}
//		}
//	}
//	return (0);
//}



#include	<stdint.h>
#include	"drawing.h"
#include	"bitmap.h"



uint32_t		get_color(int level);
void			menger(uint32_t **img, int size, int level);
void			menger_run(uint32_t **img, int size, int level, int offsetx, int offsety);



void			menger(uint32_t **img, int size, int level)
{
	if (level < size)
	{
		menger_run(img, size, level, 0, 0);
	}
}

void			menger_run(uint32_t **img, int size, int level, int offsetx, int offsety)
{
	int			div;
	t_point		point;

	if (!(size % 3) && level > 0 && level < size)
	{
		div = size / 3;
		point.x = div + offsetx;
		point.y = div + offsety;
		draw_square(img, &point, div, get_color(level));
		level--;
		menger_run(img, div, level, offsetx, offsety);
		menger_run(img, div, level, offsetx, offsety + div);
		menger_run(img, div, level, offsetx, offsety + 2 * div);
		menger_run(img, div, level, offsetx + div, offsety);
		menger_run(img, div, level, offsetx + div, offsety + 2 * div);
		menger_run(img, div, level, offsetx + 2 * div, offsety);
		menger_run(img, div, level, offsetx + 2 * div, offsety + div);
		menger_run(img, div, level, offsetx + 2 * div, offsety + 2 * div);
	}
}

uint32_t			get_color(int level)
{
	uint32_t		color;
	unsigned char	*bytes = (unsigned char *) &color;

	bytes[0] = 0;
	bytes[1] = 0xFF / (level);
	bytes[2] = bytes[1];
	bytes[3] = bytes[1];
	fix_endian(&color, sizeof(uint32_t));
	return (color);
}