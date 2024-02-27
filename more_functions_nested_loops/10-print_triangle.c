/*
 * File: 10-print_triangle.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
  * print_triangle - function that prints a triangle, followed by a new line.
  *
  * @size: That's the size of the square
  *
  * return: The absolute value of the integer
  */

void print_triangle(int size)
{
int a = 0;
int b = 0;
if (size <= 0)
_putchar('\n');
else if
{
while (a < size)
{
while (b < size)
{
if (b < (size - (a + 1)))
_putchar(32);
else
_putchar(35);
a++;
}
_putchar('\n');
b++;
}
}
}
