#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
* main - Enter print 
*
*Description : is your number negative, positive or zero
*Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	if (n >= 0)
	{
		if (n > 0)
			printf("%d is positive\n", n);
		else
				printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);
	return (0);
}
