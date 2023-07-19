#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bts, x;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bts = atoi(argv[1]);

	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (x = 0; x < bts; x++)
	{
		if (i == bts - 1)
		{
			printf("%02hhx\n", arr[x]);
			break;
		}
		printf("%02hhx ", arr[x]);
	}
	return (0);
}
