#include "main.h"
/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: pointer to the name of file.
 * @text_content: pointer to string.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, f_write, f_close;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		f_write = write(f, text_content, strlen(text_content));
		if (f_write == -1)
			return (-1);
	}

	f_close = close(f);
	if (f_close == 1)
		return (-1);

	return (1);
}
