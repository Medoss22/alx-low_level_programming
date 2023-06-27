#include "main.h"
/**
 * puts2 -  prints every other character of a string.
 *@str: pointer to string.
 *Return: No return.
 */
void puts2(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		if (s % 2 == 0)
			_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
