#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 *
 * @name: its name
 * @age: its age
 * @owner: its owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int i = 0;
int j = 0;
int k;
dog_t *d;
while (name[i] != '\0')
i++;
while (owner[j] != '\0')
j++;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->name = malloc(sizeof(d->name) * i);
d->owner = malloc(sizeof(d->owner) * j);
if (d->name == NULL || d == NULL)
{
free(d->name);
free(d);
free(d->owner);
return (NULL);
}
for (k = 0; k <= i; k++)
{
d->name[k] = name[k];
}
for (k = 0; k <= j; k++)
{
d->owner[k] = owner[k];
}
d->age = age;
return (d);
}
