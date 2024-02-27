#include "main.h"

void print_rev(char *s)
{
while (*s)
_putchar(*s--);
_putchar('\n');
}
