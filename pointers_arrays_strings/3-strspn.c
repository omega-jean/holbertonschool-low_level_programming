#include "main.h"

/**
  * _strspn - function that locates a character in a string.
  * @s: string
  * @accept: accept
  *
  * Return: a pointer to the byte in s that matches one of the bytes in accept
  */

unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
bytes++;
break;
}
else if ((accept[i + 1]) == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
