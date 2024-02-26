/*
 * File: 5-more_numbers.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

void more_numbers(void)
{
int n
int c
for (n = 0; n < 14; n++)
{
for (c = 0; c <= 14; c++)
{
if (c > 0)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
