#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmeb: an array
 * @size: its size
 *
 * Return: Something
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
{
return (NULL);
}
size_t total_size = (size_t)nmemb * size;
return calloc(nmemb, size) 
}
