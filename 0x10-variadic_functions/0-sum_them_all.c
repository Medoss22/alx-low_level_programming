#include "variadic_functions.h"

/**
 *sum_them_all -  a function that returns the sum of all its parameters.
 *@n: the number of parameters.
 *Return: value of sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int j;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (j = 0 ; j < n ; j++)
		s += va_arg(ptr, int);

	va_end(ptr);

	return (s);
}
