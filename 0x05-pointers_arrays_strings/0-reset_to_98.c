#include "main.h"
#include <stdio.h>

/**
* reset_to_98 - Updates the value pointed to by n to 98
*
* @n: Pointer to an int.
* Descrition: This function takes a pointer to an int as a parameter and updates the value it points to 98
*/
void reset_to_98(int *n)
{
	*n = 98;
	putchar(*n);
}