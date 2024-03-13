#include "main.h"
#include <stdlib.h>

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
int i;
int *s;
if (min > max)
return (NULL);
s = malloc(sizeof(char) * (max - min + 1));
if (s == NULL)
return (NULL);
for (i = min; i <= max; i++)
{
s[i - min] = i;
}
return (s);
}
