#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * main - program to copy text from file ti another file
  * @argc: number of passed arguments.
  * @argv: strings of passed arguments.]
  * Return: 0 on Success.
  */

int main(int argc, char **argv)
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
	}
	fd_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (fd_to == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
	}
	coping(fd_from, fd_to, argv[1], argv[2]);
	return (0);
}

/**
  * coping - function to execute the process of coping
  * @fd_from: the fd of source file.
  * @fd_to: the fd of destination file.
  * @from_name: name of source file.
  * @to_name: name of destination file.
  */

void coping(int fd_from, int fd_to, char *from_name, char *to_name)
{
	char *buffer;
	ssize_t _read, _write;

	buffer = (char *)malloc(1024);
	if (!buffer)
		return;

	while ((_read = read(fd_from, buffer, 1024)) > 0)
	{
		_write = write(fd_to, buffer, _read);
		if (_write == -1)
		{
			exit(99);
			dprintf(STDERR_FILENO, "Error: Can't write to %s", to_name);
		}
	}
	if (_read == -1)
		{
			exit(98);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", from_name);
		}
	close(fd_from);
	close(fd_to);
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", \
				close(fd_from) == -1 ? fd_from : fd_to);
	}
}
