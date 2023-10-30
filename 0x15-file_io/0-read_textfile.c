#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: the file to read.
 * @letters: the number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print else 0 (failure).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes_read, bytes_written;
	char *buffer = NULL;

	/* ensures the file to read is a valid address */
	if (!filename)
		return (0);

	/* attempts to open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* open success; allocate space for chars to be read from file */
	buffer = (char *) malloc(sizeof(char) * letters);
	if (!buffer) /* malloc failed */
	{
		close(fd);
		return (0);
	}

	/* read desired bytes from file to buffer */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1) /* read failed */
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write to POSIX standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
