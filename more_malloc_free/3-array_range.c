#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: its minimum
 * @max: its maximum
 *
 * Return: Something
 */


int *array_range(int min, int max)
{
unsigned int i;
int *s;
if (min > max)
return (NULL);
s = malloc(sizeof(int) * (max - min + 1));
if (s == NULL)
return (NULL);
for (i = 0; min <= max; i++)
{
s[i] = min;
min++;
}
return (s);
}
