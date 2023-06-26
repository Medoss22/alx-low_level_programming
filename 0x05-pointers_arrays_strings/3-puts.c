/**
 * _puts - Prints a string followed by a new line.
 * @str: The input string.
 */
void _puts(char *str)
{
	int y = 0;

	while (srt[y] != '\0')
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
