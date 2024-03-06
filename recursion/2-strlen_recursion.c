#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
*@s:character to be printed
*Return:returns void
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
_putchar(48);
else
{
return (_strlen_recursion + 1(s + 1));
}
}
