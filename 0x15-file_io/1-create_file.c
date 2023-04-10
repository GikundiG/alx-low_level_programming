#include "main.h"

/**
* create_file - Creates a file with specified text content
* @filename: The name of the file to create
* @text_content: The content to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, written;

	if (filename == NULL) /* Check if filename is valid */
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	/* Open file with permissions rw------- */

	if (fd == -1) /* Check if file descriptor was created successfully */
		return (-1);

	if (text_content != NULL) /* Check if content is provided */
	{
		while (text_content[len]) /* Calculate the length of the content */
			len++;
	}

	written = write(fd, text_content, len); /* Write content to file */

	if (written == -1) /* Check if write operation failed */
	{
		close(fd);
		return (-1);
	}

	close(fd); /* Close the file descriptor */
	return (1);
}
