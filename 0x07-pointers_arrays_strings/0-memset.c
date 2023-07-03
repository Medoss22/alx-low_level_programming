/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The constant byte to fill the memory with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
