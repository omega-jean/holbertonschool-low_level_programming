/*
 * File: 9-print_comb.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - "program that prints all possible combinations of single-digit
 *numbers.
 *
 * Return: Always 0.
 */


int main(void)
{
int n = 48;

while (n <= 57)
{
putchar(n);
if (n < 57)
{
putchar(44);
putchar(32);
}
n++;
}
putchar('\n');

return (0);
}
