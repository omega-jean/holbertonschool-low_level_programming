#include "main.h"

/**
  * _strncpy - function that copies a string.
  * @dest: destination
  * @src: source
  * @n: it will use at most n bytes from src
  *
  * Return: destination
  */

char *_strncpy(char *dest, char *src, int n)
{
char* start = des;
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\n';
return start;
}
