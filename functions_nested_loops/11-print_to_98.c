/*
 * File: 11-print_to_98.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Counts up to 98
*
* @n : Number of Departures
*
* Return: return result
*/

void print_to_98(int n)
{
if (n <=98)
{
while (n < 98)
printf("%d, ", n++);
printf("%d,\n", n++);
}
else
{
while (n > 98)
printf("%d, ", n--);
printf("%d,\n", n--);
}
}
