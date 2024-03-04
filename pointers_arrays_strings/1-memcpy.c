#include "main.h"

/**
  * _memscpy - function that copies memory area.
  * @dest: destination
  * @src: source
  * @n: number of time
  *
  * Return: always 0
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
