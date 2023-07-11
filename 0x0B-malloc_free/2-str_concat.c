#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int x, y, z, lim;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	s = malloc(sizeof(char) * (x + y + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (z = 0; z < x; z++)
		s[z] = s1[z];
	lim = y;
	for (y = 0; y <= lim; z++, y++)
		s[z] = s2[y];
	return (s);
}
