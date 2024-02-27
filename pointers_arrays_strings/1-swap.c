#include "main.h"

/**
  * swap_int - function that swaps the values of two integers.
  * @a: first number
  * @b: second number
  *
  * Return: always 0
  */

void swap_int(int *a, int *b)
{
int temp = 0;
temp = *b;
*b = *a;
*a = temp;
return (0);
}
