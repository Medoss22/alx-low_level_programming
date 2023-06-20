#include "main.h"
/**
* main - printer
*
* print_alphabet
*/

void print_alphabet(void);
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		_putchar(lett);
	}
	_putchar('\n');
}
