#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: its d
 * @name: name of dog.
 * @age: age of dog
 * @owner: owner of dog
 *
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
printf(error);
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
