/*
 * File: 100-print_comb3.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
int a;
int b;
int c;
for (a = '0'; a <= 9; a++)
	{
		for (b = '0'; b <= 9; b++)
			{
				for (c = '0'; c <= 9; c++)
					{
						putchar(a);
						putchar(b);
						putchar(c);
						putchar(',');
						putchar(' ');
					}
			}
	}
}
