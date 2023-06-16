#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Enter print
* Description : give the digit of num stored in n
* Return: Always 0 (Success)
*/

int main(void)
{
	int n, A;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	A = n % 10;
	
	if (A > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, A);
	else if (A < 6 && A != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, A);

	else
		printf("Last digit of %d is %d and is 0\n", n, A);
return (0);
}
