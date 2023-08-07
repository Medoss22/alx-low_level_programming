#include "main.h"

/**
 * main - Entry points
 * @argc: the number of argument.
 * @argv: an arrays of string.
 * Return: 
*/
int main(int argc, char **argv)
{
    int f, read_f;
    Elf64_Ehdr reader;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage : %s elf_file\n", argv[0]);
        exit(98);
    }

    f = open(argv[1], O_RDONLY);
    
	if (f == -1)
    {
        dprintf(STDERR_FILENO, "Error can't open this file %s\n", argv[1]);
        exit(98);
    }
    
    close(f);
    return (0);
}
