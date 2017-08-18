//
// Created by BlueSocket on 11/08/2017.
//

#ifndef		DAY_01_DRAWING_H
# define	DAY_01_DRAWING_H

#include	<stdlib.h>
#include	<stdint.h>

typedef		struct		s_point
{
	unsigned int		x;
	unsigned int		y;
}						t_point;

void		draw_square(uint32_t **img, t_point *orig, size_t size, uint32_t color);

#endif //DAY_01_DRAWING_H
