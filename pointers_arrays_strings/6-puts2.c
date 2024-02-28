#include "main.h"

/**
  * puts2 - function that prints a string, in reverse.
  * @str: string
  *
  * Return: the size of the string
  */

void puts2(char *str)
{
int i = 0;
int len = 0;
while (str[len])
len++;
for (i = len -1; i >= 0; i+=2)
_putchar(str[i]);
_putchar('\n');
}
