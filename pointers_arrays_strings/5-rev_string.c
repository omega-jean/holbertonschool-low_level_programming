#include "main.h"

/**
  * rev_string - function that reverses a string.
  * @s: string
  *
  * Return: the size of the string
  */

void rev_string(char *s)
{
int len = 0;
int a = 0;
int b = 0;
char l;
while (s[len])
len++;
for (a = len - 1; a >= len / 2; len--)
{
l = s[a];
s[a] = s[b];
s[b] = l;
b++;
}
}
