/*
 * File: 2-print_alphabet_x10.c
 * Auth: omega-jean
 */

#include "main.h"

/**
 * print_alphabet_x10 - "prints the alphabet x10
 */

void print_alphabet_x10(void)
{

char n;
int c = 0;
while (c <= 9)

{
for (n = 97; n <= 122; n++)
{
_putchar(n);
}

_putchar('\n');
c++;
}
}
