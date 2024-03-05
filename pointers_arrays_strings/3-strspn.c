#include "main.h"

/**
  * _strspn - function that locates a character in a string.
  * @s: string
  * @accept: accept
  *
  * Return: a pointer to the byte in s that matches one of the bytes in accept
  */

char *_strpbrk(char *s, char *accept)
{
int b = 0;
int i = 0;
while (*s)
{
for (accept[i]; i++)
{
if (accept[i] == *s)
{
b++;
}
else if ((accept[i + 1]) == '\0')
return (b);
}
s++;
}
return (b);
}
