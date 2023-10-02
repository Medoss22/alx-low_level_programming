#include "main.h"
/**
 *read_textfile - a function that reads a text file and prints
 *                                  it to the POSIX standard output.
 *@filename: pointers to name of name.
 *@letters: is the number of letters it should read and print.
 *Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, read_file, write_output;
	char *sto;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	sto = malloc(sizeof(char) * letters + 1);
	read_file = read(f, sto, letters);
	sto[letters] = '\0';

	write_output = write(STDOUT_FILENO, sto, read_file);
	if (write_output == -1)
		return (0);
	free(sto);
	close(f);

	return (write_output);
}
