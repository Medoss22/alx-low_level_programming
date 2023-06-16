#include <stdio.h>
/**
* main - Prints all possible combinations of single-digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int D;

	for (D = 0; D < 10; D++)
	{
		putchar('0' + D);
		if (D != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
