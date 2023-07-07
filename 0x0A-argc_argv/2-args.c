#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: An array of strings containing the command-line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
		printf("%s\n", argv[x]);
	return (0);
}
