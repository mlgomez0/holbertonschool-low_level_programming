#include"holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - copy a file into another file.
 *@ac: number of arguments
 *@av: array of arguments
 *Return: Always 0.
 */
int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}

/**
 *copy_file - copies a file into other
 *@file_from:origin file
 *@file_to:destination file
 *Return: 0
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fdf, fdt, m = 0;
	ssize_t whatwrote, whatread;
	char *buf[1024];

	fdf = open(file_from, O_RDONLY);
	if (file_from == NULL || fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fdt = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	while ((whatread = read(fdf, buf, 1024)) > 0)
	{
		m = 1;
		whatwrote = write(fdt, buf, whatread);
		if (whatwrote == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (m == 0 || fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
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
	return (0);
}
