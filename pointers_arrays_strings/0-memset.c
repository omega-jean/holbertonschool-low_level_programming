#include "main.h"

/**
  * _memset - function that fills memory with a constant byte.
  * @s: it's a pointer
  * @b: constant byte
  * @n: number of time
  *
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (int i = 0; i < n; i++)
s[i] = b;
return (s);
}
