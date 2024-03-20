#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: its a separator
 * @n: its a number
 *
 * Return: Always 0.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char *);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
