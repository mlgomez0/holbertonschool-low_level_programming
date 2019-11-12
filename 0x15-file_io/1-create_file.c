#include"holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 *create_file - create files and copy text
 *@filename: name of the file to be created
 *@text_content: text to be witten in file
 *Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t whatwrote;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		i = strlen(text_content);
		whatwrote = write(fd, text_content, i);
		if (whatwrote == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
