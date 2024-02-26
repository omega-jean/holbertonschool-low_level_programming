/*
 * File: 4-print_most_numbers.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

void print_most_numbers(void)
{
int n = 48;
while (n <= 57)
{
if (n != 50 && n != 52)
{
_putchar(n+1);
n++;
}
_putchar('\n');
}
}
