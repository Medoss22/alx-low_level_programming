#include "main.h"
/**
* create_file - Create a function that creates a file.
* @filename: pointer to name of file.
* @text_content: pointers to string to write.
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, b_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		b_written = write(fd, text_content, strlen(text_content));
		if (b_written == -1)
		{
			close(fb);
			return (-1);
		}
	}

	close(fb);
	return (1);
}
