#include "main.h"

/**
  * puts2 - function that prints a string, in reverse.
  * @str: string
  *
  * Return: the size of the string
  */

void puts2(char *str)
{
while (*str)
_putchar(*str+=2);
_putchar('\n');
}
