#include "main.h"
/**
* main - printer
*
* print_alphabet - Prints the alphabet in lowercase followed by a new line.
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