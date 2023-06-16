#include <stdio.h>

/**
* main - Enter prenter
* description : print all the alphabet
* Return: Always 0 (Success)
*/

int main(void)
{
	char let = 'a';

	while(let <= 'z')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
	return (0);
}
