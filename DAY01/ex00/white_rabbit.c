#include    <stdio.h>
#include    <stdlib.h>
#define     RAND   random() % 37 + 1

int		    follow_the_white_rabbit(void)
{
	int		dc;
	int		sum;

	sum = 0;
	while (dc != 1 && dc != 37 && sum < 397)
	{
		if ((dc = RAND) == 3)
			dc = (RAND + 3);
		if (dc == 10 || dc == 15 || dc == 23)
			printf("devant\n");
		else if ((dc >= 4 && dc <= 6) || (dc >= 17 && dc <= 21) || dc == 28)
			printf("gauche\n");
		else if (dc == 8 || dc == 16 || dc == 24 || dc == 26 || dc == 32 || dc == 40)
			printf("derriere\n");
		else if (dc == 13 || dc == 34 || dc == 35 || dc == 36 || dc == 38 || dc == 39)
			printf("droite\n");
		sum += dc;
		if (dc == 1 || dc == 37 || sum >= 397)
		{
			printf("LAPIN !!!\n");
			dc = 1;
		}
	}
	return (sum);
}