#include "main.h"

/**
  * _strspn - function that locates a character in a string.
  * @s: string
  * @c: character
  *
  * Return: 
  */

char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return ('\0');
}
