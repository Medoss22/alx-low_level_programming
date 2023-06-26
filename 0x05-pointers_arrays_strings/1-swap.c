/**
* swap_int - Swaps the values of two integers.
* @a: first integer
* @b: second integer
*
* Description: This function takes tow integers and swaps their values
*/
void swap_int(int *a, int *b)
{
	int X = *a;

	*a = *b;
	*b = X;
}
