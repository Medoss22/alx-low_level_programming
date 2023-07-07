#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: An array of strings containing the command-line arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int i, n, s = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[i]);
		if (n <= 0)
		{
			printf("Error\n");
			return (1);
		}
		s += n;
	}
	printf("%d\n", s);
	return (0);
}
