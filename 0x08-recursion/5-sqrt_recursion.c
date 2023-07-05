/**
 * _sqrt_recursion - Returns the natural square root of a number recursively
 * @n: The number to calculate the square root of
 * Return: The natural square root of n, or -1 if it does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - Helper function to find the square root recursively using binary search
 * @n: The number to calculate the square root of
 * @start: The starting point of the search range
 * @end: The ending point of the search range
 * Return: The natural square root of n, or -1 if it does not have a natural square root
 */
int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start > end)
		return -1;
	if (mid * mid == n)
		return mid;
	if (mid * mid > n)
		return sqrt_helper(n, start, mid - 1);
	return sqrt_helper(n, mid + 1, end);
}
