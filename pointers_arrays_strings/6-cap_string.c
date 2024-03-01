#include "main.h"

/**
  * cap_string - function that capitalizes all words of a string.
  * @c:
  *
  * Return: string
  */

char *cap_string(char *c)
{
int i;
char array[13] {' ', '\t', '\n', ',', ';', '.'
, '!', '?', '"', '(', ')', '{', '}'};
while (c[i] != '\0')
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - 32;
}
i++;
}
