/*
 * File: 9-times_table.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
* times_table - Printed multiplication tables
*
* Return: returns 0
*/

void times_table(void)
{
int mult;
int num;
int result;
for (num = 0; num <= 9; num++)
{
_putchar('0');
{
for (mult = 1; mult <= 9; mult++)
_putchar(',');
_putchar(' ');
result = num * mult;
if (result <= 9)
_putchar(' ');
else
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
_putchar('\n');
}
}
