/*
 * File: 3-print_numbers.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
  * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
  * @n : The integer to be computed.
  *
  *  return : The absolute value of the integer
  */

void print_numbers(void)
{
int n = 48;
while (n <= 57)
{
_putchar(n);
n++;
}
_putchar('\n');
}
