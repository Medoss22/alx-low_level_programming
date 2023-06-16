#include <stdio.h>
/**
* main - Prints lowercase alphabet in reverse
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int lett;

	for (lett = 'z'; lett >= 'a'; lett--)
	{
		putchar(lett);
	}
	putchar('\n');
	return (0);
}
