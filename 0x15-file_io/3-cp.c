#include "main.h"
/**
 * print_error - a funtion that print error.
 * @file_from: first file.
 * @file_to: second file.
 * @a: pointer to string.
 * Return: 98 if cant read.
 *         99 if cant write.
 *          0 return.
 */
int print_error(int file_from, int file_to, char *a)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a);
		exit(99);
	}
	return (0);
}
