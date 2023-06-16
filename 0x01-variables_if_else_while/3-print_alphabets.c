#include <stdio.h>

/**
* main - Prints
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		putchar(let);
		let++;
	}

	let = 'A';

	while (let <= 'Z')
	{
		putchar(let);
		let++;
	}
	putchar('\n');

	return (0);
}
