#include <stdio.h>

/**
* main - Prints num from 0 to 9
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int N = 0;

	while (N < 10)
	{
		putchar(N + '0');
		N++;
	}
	putchar('\n');
	return (0);
}
