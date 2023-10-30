#include "main.h"

void error_handler(char *msg, char *filename, int exit_code);

/**
 * main - a program that copies the content of a file to another file.
 * @ac: argument count at command line.
 * @av: argument vector at command line.
 *
 * Return: 0 (success) else between 97 - 100 (failure).
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, close_fd, bytes_read, bytes_written;
	char *file_from, *file_to, buffer[1024];

	if (ac != 3)
		error_handler("Usage: cp file_from file_to", NULL, 97);

	file_from = av[1], file_to = av[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_handler("Error: Can't read from file ", file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_handler("Error: Can't write to ", file_to, 99);

	do {
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == -1)
			error_handler("Error: Can't read from file ", file_from, 98);
		else if (bytes_read > 0)
		{
			bytes_written = write(fd_to, buffer, bytes_read);
			if (bytes_written == -1 || bytes_written != bytes_read)
				error_handler("Error: Can't write to ", file_to, 99);
		}
	} while (bytes_read > 0);

	close_fd = close(fd_from);
	if (close_fd == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), 100);
	close_fd = close(fd_to);
	if (close_fd == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), 100);

	return (0);
}

/**
 * error_handler - a function that handlers error in a program.
 * @msg: error message to print.
 * @filename: name of file that io operation failed on.
 * @exit_code: code to use for exit.
 */
void error_handler(char *msg, char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "%s%s", msg, filename ? filename : "");
	dprintf(STDERR_FILENO, "\n");
	exit(exit_code);
}
