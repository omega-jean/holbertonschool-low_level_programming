/*
 * File: 7-print_tebahpla.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - "This program prints the alphabet upside down
 *
 * Return: Always 0.
 */


int main(void)
{
int n = 122;

while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');

return (0);
}
