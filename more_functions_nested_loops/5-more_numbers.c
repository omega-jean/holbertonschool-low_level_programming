/*
 * File: 5-more_numbers.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
  * more_numbers - Print all numbers from 0 to 14, 10 faith
  *
  *
  *  return: The absolute value of the integer
  */

void more_numbers(void)
{
int n;
int c;
for (n = 0; n < 10; n++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
