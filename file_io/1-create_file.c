#include "main.h"

/**
 * create_file - create a file and write in it
 * @filename: custom file to be created
 * @text_content: custom content of the file created
 * Return: 1 or -1;
 */

int create_file(const char *filename, char *text_content)
{
	int custom_fd, custom_len, custom_w;

	if (filename == NULL)
		return (-1);

	custom_fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

	if (custom_fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (custom_len = 0; text_content[custom_len] != '\0'; custom_len++)
			;
		custom_w = write(custom_fd, text_content, custom_len);
	}
	if (custom_w == -1)
	{
		return (-1);
	}
	close(custom_fd);
	return (1);
}
