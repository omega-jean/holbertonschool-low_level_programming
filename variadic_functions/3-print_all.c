#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * print_char - print a character
 *
 * @args: character.
 */

void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}


/**
 * print_int - print a integer
 *
 * @args: character.
 */

void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}


/**
 * print_float - print a float
 *
 * @args: character.
 */

void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}


/**
 * print_string - print a string
 *
 * @args: character.
 *
 * return: always 0
 */

void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}


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
int i;
int j;
char *separator = "";

print_type s[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};

va_start(args, format);
j = 0;
while ((format != NULL && format[j] != '\0'))
{
i = 0;
while (s[i].pr != '\0')
{
if (s[i].pr == format[j])
{
printf("%s", separator);
s[i].print(args);
separator = ", ";
}
i++;
}
j++;
}
va_end(args);
printf("\n");
}
