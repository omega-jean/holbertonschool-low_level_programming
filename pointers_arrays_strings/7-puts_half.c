#include "main.h"

/**
  * puts_half - function that prints half of a string.
  * @str: string
  *
  * Return: the size of the string
  */

void puts_half(char *str)
{
int a, b;
int longi = 0;
for (a = 0; str[a] != '\0'; a++)
longi++;
b = (longi / 2);
if ((longi % 2) == 1)
b = ((longi + 1) / 2);
for (a = b; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
