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
	ssize_t file, read_file, write_output;
	char *sto;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	sto = malloc(sizeof(char) * letters + 1);
	read_file = read(file, sto, letters);
	sto[letters] = '\0';

	write_output = write(STDOUT_FILENO, sto, read_file);
	if (write_output == -1)
		return (0);
	free(sto);
	close(file);

	return (write_output);
}
