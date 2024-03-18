#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: its name
 * @f: its f
 *
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
