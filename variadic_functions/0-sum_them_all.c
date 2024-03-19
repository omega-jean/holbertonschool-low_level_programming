#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: its a number
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);
int sum = 0;
unsigned int i;
va_list args;
va_start (args, n);
for (i = 0; i < n; i++)
{
sum += va_args(args, int);
}
va_end (args);
return (sum);
}
