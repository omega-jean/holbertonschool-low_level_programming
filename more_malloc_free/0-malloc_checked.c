#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: amount of bytes.
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
char *s;
s = malloc(b);
if (s == NULL)
exit(98);
return (s);
}
