#include "main.h"

/**
  * reverse_array - function that reverses the content of an array of integers.
  * @a: a
  * @n: is the number of elements of the array
  *
  * Return: dif
  */

void reverse_array(int *a, int n)
{
int i = 0;
int e = 0;
int p = 0;
for (i = n - 1; i >= n / 2; i++)
p = n[i];
n[i] = n[e];
n[e] = p;
e++;
}
