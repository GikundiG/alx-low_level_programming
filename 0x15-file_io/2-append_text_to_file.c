#include "main.h"

/**
* append_text_to_file - Appends text to end of a file.
* @filename: Name of the file.
* @text_content: NULL-terminated string to add at end of file.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len;

	/* Return -1 if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open file for writing, create it if it doesn't exist */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write it to file */
	if (text_content != NULL)
	{
		/* Get length of text_content */
		len = 0;
		while (*(text_content + len))
			len++;

		/* Write text_content to file */
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
