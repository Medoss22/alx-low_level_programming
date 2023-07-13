#include <main.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory to allocate
 *
 * Return: Pointer to the allocated memory
 * If malloc fails, the function terminates the program with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Memory allocation failed\n");
		exit(98);
	}
	return (ptr);
}
