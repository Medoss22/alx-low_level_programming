#include "main.h"
/**
* puts_half - rints half of a string.
*@str: pointer to string.
*Return: No return.
*/
void puts_half(char *str)
{
	int l = 0;
	int h_l;
	int i;

	while (str[l] != '\0')
	{
		l++;
	}
	h_l = (l - 1) / 2;
	for (i = h_l + 1; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
