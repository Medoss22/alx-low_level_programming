#include "variadic_functions.h"

/**
 *print_strings -  a function that prints strings, followed by a new line.
 *@separator: is the string to be printed between the strings
 *@n: is the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *str;
	va_list p;

	va_start(p, n);

	for (j = 0 ; j < n ; j++)
	{
		str =  va_arg(p, char *);

		if (str  == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (j < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
