#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *
 * @d: array
 *
 * return: always 0
 */


void print_dog(struct dog *d)
{
if (d)
{
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name: %s\n");
printf("Age: %f\n");
printf("Owner: %s\n");
}
}
