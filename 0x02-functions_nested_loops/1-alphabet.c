#include "main.h"
/**
* main - printer
*
* print_alphabet - prints the alphabe, in lowercase
*/

void print_alphabet(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		_putchar(lett);
	}
	_putchar('\n');
}
