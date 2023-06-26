/**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int L = 0;

	while (*s != 0)
	{
		L++;
		s++;
	}
	return L
}
