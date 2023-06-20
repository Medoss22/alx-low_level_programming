#include "main.h"
/**
 * print_last_digit - Check Main
 * @x: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number x
 */
int print_last_digit(int x)
{
	int ld = x % 10;

	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');
	return (ld);
}
