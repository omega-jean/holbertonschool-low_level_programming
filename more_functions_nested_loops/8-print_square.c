/*
 * File: 8-print_square.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
  * print_square - function that prints a square, followed by a new line.
  *
  * size: That's the size of the square
  *
  * return: The absolute value of the integer
  */

void print_square(int size)
{
int a, b;
if (size <= 0)
_putchar('\n');
else
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
