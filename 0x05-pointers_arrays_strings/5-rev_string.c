#include "main.h"
/**
 * rev_string - reverses a string.
 *@s: pointer to string.
 *Return: No return.
 */
void rev_string(char *s)
{
	int rev = 0, sta = 0;
	char ch;

	while (s[rev] != '\0')
	{
		rev++;
	}
	while (sta < rev / 2)
	{
		ch = s[sta];
		s[sta] = s[rev - 1 - sta];
		s[rev - 1 - sta] = ch;
		sta++;
	}
}
