#include "main.h"

/**
 *  create_custom_file - create a file and write in it
 
 * @custom_filename: custom file to be created
 * @custom_text_content: custom content of the file created
 
 * Return: 1 or -1;
 */

int create_custom_file(const char *custom_filename, char *custom_text_content)
{
 int custom_fd, custom_len, custom_w;
 
 if (custom_filename == NULL)
  return (-1);
 
 custom_fd = open(custom_filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
 if (custom_fd == -1)
 {
  return (-1);
 }
 if (custom_text_content != NULL)
 {
  for (custom_len = 0; custom_text_content[custom_len] != '\0'; custom_len++)
   ;
  custom_w = write(custom_fd, custom_text_content, custom_len);
 }
 if (custom_w == -1)
 {
  return (-1);
 }
 close(custom_fd);
 return (1);
}
