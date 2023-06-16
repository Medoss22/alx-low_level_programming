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
	
	n= rand();
	printf("The num is %d\n", n);

	if (n > 0) 
	{
		printf("%d is positive\n");
	} 
	else if (n == 0) 
	{
		printf("%d is zero\n");
	} 
	else 
	{
		printf("%d is negative\n");
	}

	return(0);
}
