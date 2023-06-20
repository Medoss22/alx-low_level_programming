#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @p: is the int to chack
 * Return: 1 and prints + if p is greater than zero
 * 0 and prints 0 if p is zero,
 * -1 and prints - if p is less than zero
 */
int print_sign(int p)
{
	if (p > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (p == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
