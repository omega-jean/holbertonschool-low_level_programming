/*
 * File: 7-print_last_digit.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
 * _last_digit - function to return the last digit
 * @n: The integer to be computed.
 *
 * Returns: the value of the last digit
 */

int print_last_digit(int n)
{
if (n < 0)
{
return 10 - (n % 10);
}
else
{
return (n % 10);
}
}
