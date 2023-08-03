#include "main.h"

/**
* print_binary - a function that prints the binary representation of a number.
* @n: number in integer.
*/
void print_binary(unsigned long int n)
{
	int c_b = 0;
	unsigned long int sec = n;

	while (sec > 0)
	{
		sec >>= 1;
		c_b++;
	}
	c_b--;
	do {
		_putchar((n >> c_b-- & 1) + '0');
	} while (c_b >= 0);
}
