#include "main.h"
/**
 *  _isalpha - a function that checks for alphabetic character.
 *  @x: is the character to be checked
 *  Return: 1 is x is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
