#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - it reads text from given file and writes it to the stdout.
 * @filename: string for the name of the file.
 * @letters: number of letters it must read from the file.
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, _read, _write;
	char *buffer;

	if (!filename)
		return (0);

	/*opeing the file*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* local buffer*/
	buffer = (char *)malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	/* reading */
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* writing */
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (_read);
}
