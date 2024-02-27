/*
 * File: 9-fizz_buzz.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"
#include <stdio.h>

/**
  * main - program that prints the numbers from 1 to 100
  *
  *
  * Return: fizz if it's multiple of 3, buzz if it's multiple of 5 
  * 	and fizzbuzz if it's both
  */

int main(void)
{
int n = 1;
while (n <= 100)
{
if (((n % 3) == 0) && ((n % 5) == 0))
printf("FizzBuzz");
else if ((n % 5) == 0)
printf("Buzz");
else if ((n % 3) == 0)
printf("Fizz");
else
printf("%d", n);
if (n < 100)
putchar(32);
n++;
}
putchar('\n');
return (0);
}
