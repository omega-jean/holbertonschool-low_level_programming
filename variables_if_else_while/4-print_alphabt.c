/*
 * File: 4-print_alphabt.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - "This program prints the alphabet in lowercase,
 *         followed by a new line
 *
 * Return: Always 0.
 */


int main(void)
{
int n = 97;

while (n <= 122)
{
if (n != 113 && n != 101)
putchar(n);
n++;
}
putchar('\n');

return (0);
}
