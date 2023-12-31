#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: An array of strings containing the command-line arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
		return (0);
	}
}
