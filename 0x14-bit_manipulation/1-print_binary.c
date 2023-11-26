#include "main.h"

/**
* print_binary - a function that prints the binary representation of a number.
* @n: number in integer.
*/
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int second_n = n;

	while (second_n > 0)
	{
		second_n >>= 1;
		count++;
	}
	count;
	do {
		_putchar((n >> count & 1) + '0');
	} while (count >= 0);
}
