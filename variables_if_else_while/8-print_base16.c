/*
 * File: 8-print_base16.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - "This program prints all base 16 numbers in lowercase, 
 * 		followed by a new line.
 *
 * Return: Always 0.
 */


int main(void)
{
int n = 48;
int m = 97;

while (n <= 57)
{
putchar(n);
n++;
}
while (m <= 102)
{
putchar(m);
m++;
}
putchar('\n');

return (0);
}
