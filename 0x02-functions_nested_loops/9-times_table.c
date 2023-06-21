#include "main.h"
/**
* times_table -  a function that prints the 9 times table, starting with 0.
* i = row, j = column, r = result i*j
* Return: times table
* add extra space past single digit
*/
void times_tabel(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;

			if (r <= 9)
			{
				_putchar(r + '0');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
