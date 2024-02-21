/*
 * File: 1-alphabet.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include <unistd.h>
#include "main.h"

void print_alphabet(void);
{
int n = 97;

while (n <= 122)
{
_putchar(n);
n++;
}
_putchar('\n');

return (0);
}
