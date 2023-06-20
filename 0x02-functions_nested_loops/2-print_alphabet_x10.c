#include "main.h"
/**
* print_alphabet_x10 - Prints the lowercase alphabet 10 times, followed by a new line.
*/
void print_alphabet_x10(void)
{
	char lett;
	int p;

	for (p = 0; p < 10; p++)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
		{
			_putchar(lett);
		}
	}
	_putchar('\n');
}
