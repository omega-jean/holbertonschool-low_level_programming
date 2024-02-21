/*
 * File: 5-print_numbers.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - "This program prints all the numbers in base 10
 *
 * Return: Always 0.
 */


int main(void)
{
int n = 48;

while (n <= 57)
{
putchar(n);
n++;
}
putchar('\n');

return (0);
}
