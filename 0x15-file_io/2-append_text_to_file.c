#include"holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 *append_text_to_file - function that append to a file
 *@filename: name of the file to be created
 *@text_content: text to be appended
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t whatwrote;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
