#include <stdio.h>

/**
* main - Entry poiter
*
* Description all possible different combinations of three digits
* Return: Alwyas 0 (Success)
*/

int mani(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = a +1; b <= 8; b++)
		{
			for (c = b +1; c <= 9; c++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if ( a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	returne (0);
}
