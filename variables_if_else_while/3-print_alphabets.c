/*
 * File: 3-print_alphabets.c
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
int m = 65;

while (n <= 122)
{
putchar(n);
n++;
}
while (m <= 90)
{
putchar(n);
n++;
}
putchar('\n');

return (0);
}
