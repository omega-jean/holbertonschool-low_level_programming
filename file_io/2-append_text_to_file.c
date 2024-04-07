#include "main.h"

/**
 * append_text_to_file - appand a text to the end of file
 * @filename: filename
 * @text_content: text content of the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int custom_fd, custom_len, custom_w;

	if (filename == NULL)
		return (-1);
	custom_fd = open(filename, O_APPEND | O_WRONLY);
	if (custom_fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (custom_len = 0; text_content[custom_len] != '\0'; custom_len++)
			;
		custom_w = write(custom_fd, text_content, custom_len);
		if (custom_w == -1)
			return (-1);
	}
	close(custom_fd);
	return (1);
}
