#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int c, x, y, ia;

	if (ac == 0)
		return (NULL);
	for (c = x = 0; x < ac; x++)
	{
		if (av[x] == NULL)
			return (NULL);
		for (y = 0; av[x][y] != '\0'; y++)
			c++;
		c++;
	}
	a = malloc((c + 1) * sizeof(char));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (x = y = ia = 0; ia < c; y++, ia++)
	{
		if (av[x][y] == '\0')
		{
			a[ia] = '\n';
			x++;
			ia++;
			y = 0;
		}
		if (ia < c - 1)
			a[ia] = av[x][y];
	}
	a[ia] = '\0';

	return (a);
}
