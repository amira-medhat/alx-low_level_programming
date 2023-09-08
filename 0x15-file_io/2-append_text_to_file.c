#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 *  append_text_to_file - it appends text to text file.
 * @filename: string to the name of the file.
 * @text_content: text to be written in the file.
 * Return: 1 on Success, -1 on Fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t _write = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (strlen(text_content) && text_content != NULL)
	{
		_write = write(fd, text_content, strlen(text_content));
		if (_write == -1 || _write != (ssize_t)strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (_write == (ssize_t)strlen(text_content) ? 1 : -1);
}
