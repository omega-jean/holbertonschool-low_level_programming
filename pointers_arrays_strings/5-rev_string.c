#include "main.h"

/**
  * rev_string - function that reverses a string.
  * @s: string
  *
  * Return: the size of the string
  */

void rev_string(char *s)
{
int a = 0;
int b = 0;
char l;
while (s[a])
a++;
for (a = b - 1; a >= b / 2; a--)
{
l = s[a];
s[a] = s[b];
s[b] = l;
}
}
