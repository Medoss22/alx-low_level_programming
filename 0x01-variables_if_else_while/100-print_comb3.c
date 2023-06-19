#include <stdio.h>

/**
* main - pronter
* Decription : prints all possible different combinations of two digits
* Return: Alwyas 0 (Success)
*/

int main(void)
{
	int i, h;

	for (i = 0 ; i <= 8 ; i++)
	{
		for (h = i + 1; h <= 9; h++)
		{
			putchar('0' + i);
			putchar('0' + h);
			if (i != 8 || h != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
