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
int i = 0;
char l;
while (s[len])
len++;
for (i = len - 1; i >= len / 2; i--)
{
l = s[i];
s[i] = s[j];
s[j] = l;
}
}
