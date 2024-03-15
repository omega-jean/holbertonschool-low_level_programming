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
 *
 * return: always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t new_dog = (dog_t *)malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = (char *)malloc(strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(new_dog->name, name);
new_dog->age = age;
new_dog->owner = (char *)malloc(strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
strcpy(new_dog->owner, owner);
return new_dog;
}
