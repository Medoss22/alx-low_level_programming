#include "main.h"
/*
 * File: 4-print_most_numbers.c
 * Auth: Suara Ayomide
 */

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void _putchar(char c)
{
	putchar(c);
}
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0')
		}
	}
	_putchar(\'n');
}
