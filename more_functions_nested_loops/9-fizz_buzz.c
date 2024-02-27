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
  * 	    and fizzbuzz if it's both
  */

int main(void)
{
int n;
while (n >= 1 && n <= 100)
_putchar(n);
{
if (n % 3)
printf("Fizz");
else if (n % 5)
printf("Buzz");
else ((n % 3) = 0 && (n % 5) = 0);
printf("FizzBuzz");
}
n++;
_putchar('\n');
return(0);
}
