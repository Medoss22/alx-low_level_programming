#include <stdio.h>
/**
* main - Prints all the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num <10; num++)
	{
		putchar('0' + num);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchart(num);
	}
	putchar('\n');
	return (0);
}
