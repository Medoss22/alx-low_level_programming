#include "main.h"

/**
* create_file - Create a function that creates a file.
* @filename: pointer to name of file.
* @text_content: pointers to string to write.
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int f, w_file;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		w_file = write(f, text_content, strlen(text_content));
		if (w_file == -1)
			return (-1);
	}

	close(f);
	return (1);
}
