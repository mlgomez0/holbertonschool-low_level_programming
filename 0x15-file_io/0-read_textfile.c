#include"holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *read_textfile - reads and writes a textfile
 *@filename: name of the file to be read
 *@letters: number of letters to be read
 *Return: The number of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t whatread, whatwrote;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	buf = (char *)malloc(letters * sizeof(char));
		if (buf == NULL)
			return (0);
	whatread = read(fd, buf, letters);
	if (whatread == -1)
		return (0);
	buf[letters] = '\0';
	close(fd);

	whatwrote = write(STDOUT_FILENO, buf, letters);
		if (whatwrote == -1)
			return (0);

	free(buf);
	return (whatread);
}
