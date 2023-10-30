#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: file to be created.
 * @text_content: content to place in file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written, ret = 1;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; ++len)
			;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
			ret = -1;
	}
	close(fd);

	return (ret);
}
