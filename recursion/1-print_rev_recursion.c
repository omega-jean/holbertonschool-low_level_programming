#include "main.h"

/**
* _print_rev_recursion -  function that prints a string in reverse.
*@s:character to be printed
*Return:returns void
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(s[0]);
_puts_recursion(s - 1);
}
}
