#include "main.h"

/**
  * puts2 - function that prints a string, in reverse.
  * @str: string
  *
  * Return: the size of the string
  */

void puts2(char *str)
{
int len = 0;
int i;
while (str[len])
len++;
for (i = 0; i < len; i++)
{
if ((i % 2) == 0)
_putchar(str[i]);
}
_putchar('\n');
}
