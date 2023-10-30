#include "main.h"

/**
 *  append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written, ret = 1;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
