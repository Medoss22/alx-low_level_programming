#include "variadic_functions.h"

/**
 *print_numbers - a function that prints numbers, followed by a new line
 *@separator: is the string to be printed between numbers
 *@n: the numbers of intergers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ptr;

	va_start(ptr, n);

	for (j = 0 ; j < n ; j++)
	{
		printf("%d", va_arg(ptr, int));
		if (j != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
