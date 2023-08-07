#include "main.h"
/**
* read_textfile - eads and prints a text file
* to the POSIX standard output
* @filename: name of the text file to read
* @letters: The number of letters to read and print
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, r_f, w_o;
	char *sto;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	sto = malloc(sizeof(char) * letters + 1);
	r_f = read(file, sto, letters);
	sto[letters] = '\0';

	w_o = write(STDOUT_FILENO, sto, r_f);
	if (w_o == -1)
		return (0);
	free(sto);
	close(f);

	return (w_o);
}
