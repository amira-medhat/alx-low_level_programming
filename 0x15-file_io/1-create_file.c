#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - it creates file and write some text in it.
 * @filename: string to the name of the file.
 * @text_content: text to be written in the file.
 * Return: 1 on Success, -1 on Fail.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, _write, i = 0;

	if (!filename)
		return (-1);
	/* open or create if it doeasn't exist */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (*text_content != '\0')
		{
			text_content++;
			i++;
		}
	}
	/* writing */
	_write = write(STDOUT_FILENO, text_content, i);
	if (_write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
