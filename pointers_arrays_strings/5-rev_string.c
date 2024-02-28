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
for (b = a - 1; b >= a / 2; a--)
{
l = s[a];
s[a] = s[b];
s[b] = l;
}
}
