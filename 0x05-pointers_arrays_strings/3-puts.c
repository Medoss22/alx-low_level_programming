/**
 * _puts - Prints a string followed by a new line.
 * @str: The input string.
 */
void _puts(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
		putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
