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
int a;
if (size <= 0)
_putchar('\n');
else
{
for (a = 0; a < size; a++)
{
_putchar(35);
}
_putchar('\n');
}
}
