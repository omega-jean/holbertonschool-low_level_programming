#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * print_char - print a character
 *
 * @ap: character.
 */

void print_char(va_list ap)
{
printf("%c", va_arg(ap, int));
}


/**
 * print_int - print a integer
 *
 * @ap: character.
 */

void print_int(va_list ap)
{
printf("%i", va_arg(ap, int));
}


/**
 * print_float - print a float
 *
 * @ap: character.
 */

void print_float(va_list ap)
{
printf("%f", va_arg(ap, int));
}


/**
 * print_string - print a string
 *
 * @ap: character.
 *
 * return: always 0
 */

void print_string(va_list ap)
{
if (s == NULL)
{
printf("(nil)");
return;
}
printf("%s", va-arg(ap, int));
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
}
