/*
 * File: 7-print_last_digit.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
 * print_last_digit - function to return the last digit
 *
 * @n: The integer to be computed.
 *
 * Returns: the value of the last digit
 */

int print_last_digit(int n)
{
int last_digit = n % 10;

if (last_digit < 0)
last_digit *= -1;

_putchar(last_digit + '0');

return (last_digit);
}
