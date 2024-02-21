/*
 * File: 2-print_alphabet_x10.c
 * Auth: omega-jean
 */

#include "main.h"

void print_alphabet_x10(void);
{
	
char n;
int c = 0;
while(c <= 9)
	
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}

_putchar('\n');
c++;
}
}
