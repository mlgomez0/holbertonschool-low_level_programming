#include"holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}

/**
 *create_file - create files and copy text
 *@filename: name of the file to be created
 *@text_content: text to be witten in file
 *Return: 1 on success and -1 on failure
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fdf, fdt;
	ssize_t whatwrote, whatread;
	char * buf[1024];

	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fdf = open(file_from, O_RDONLY);
	if (fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(98);
	}
	fdt = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((whatread = read(fdf, buf, 1024)) > 0)
	{
		whatwrote = write(fdt, buf, whatread);
		if (whatwrote == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (close(fdf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdf);
		exit(100);
	}
	if (close(fdt) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdt);
		exit(100);
	}
	return (1);
}
