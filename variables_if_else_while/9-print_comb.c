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
putchar(44);
putchar('\n');
n++;
}
putchar(36);

return (0);
}
