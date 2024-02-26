/*
 * File: 7-print_diagonal.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
  * print_diagonal - function that draws a diagonal line on the terminal.
  *
  * @n: This is the parameter
  *
  * return: The absolute value of the integer
  */

void print_diagonal(int n)
{
int a, b;
if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
_putchar(' ');

_putchar(92);

if (a == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
