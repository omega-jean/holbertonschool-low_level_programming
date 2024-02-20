/*
 * File: 0-positive_or_negative.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - "This program will assign a random number to the variable
 *          n each time it is executed.
 *
 * Return: Always 0.
 */


/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0);
printf(n," is positive");
else (n < 0);
printf(n," is negative");
else (n = 0);
printf(n, " is zero");
return (0);
}
