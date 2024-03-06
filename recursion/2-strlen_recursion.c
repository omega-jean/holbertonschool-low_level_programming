#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
*@s:character to be printed
*Return:returns void
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
