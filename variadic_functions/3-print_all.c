#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * print_all - function that prints anything.
 *
 * @format: is a list of types of arguments passed
 * to the function
 *
 * Return: Always 0.
 */


void print_all(const char * const format, ...)
{
va_list args;
char c;
int i;
float f;
char *s;
const char *ptr = format;
va_start(arg, format);
while (*ptr)
{
if (*ptr == 'c')
{
c = va_arg(args, int);
printf("%c", c);
}
else if (*ptr == 'i')
{
i = va_arg(args, int);
printf("%i", i);
}
else if (*ptr == 'f')
{
f = va_arg(args, double);
printf("%f", f);
}
else if (*ptr == 's')
{
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
}
ptr++;
}
va_end(args);
printf("\n");
}
