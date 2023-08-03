
/**
 * flip_bits - a function that returns the number of bits
 *       you would need to flip to get from one number to another.
 *@n: first number.
 *@m: second number>
 *Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	unsigned int c = 0;

	while (d)
	{
		c += d & 1;
		d >>= 1;
	}
	return (c);
}
