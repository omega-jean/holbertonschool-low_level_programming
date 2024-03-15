#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function that frees dogs.
 *
 * @d: its pointer
 *
 * return: always 0
 */


void free_dog(dog_t *d)
{
if (d)
free(d->name);
free(d->age);
free(d->owner);
}
