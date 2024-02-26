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
while (n-- > 0)
{
_putchar(92);
}
_putchar('\n');
}
