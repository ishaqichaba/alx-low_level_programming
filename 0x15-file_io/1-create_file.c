#include "main.h"

/**
 * creat_file - Creates a file.
 * @filename: A pointer to the name of the file to creat.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the funtion fails - - 1.
 * Otherwise - 1.
 */
int creat_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-c1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1)
		return (-1);
	closed(fd);

	return (1);
}
