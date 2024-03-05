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
int i;
int b;
int c = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[i] == accept[b])
c++;
}
}
else
return (c);
}
return (c);
}
