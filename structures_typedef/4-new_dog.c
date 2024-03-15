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
int i = 0;
int j = 0;
int k;
while (name[i] != '\0')
i++;
while (owner[j] != '\0')
j++;
dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = (char *) malloc(i + 1);
new_dog->owner = (char *) malloc(j + 1);
if (new_dog->name == NULL || new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog->age);
free(new_dog->owner);
return (NULL);
}
for (k = 0; k <= i; k++)
{
new_dog->name[k] = name[k];
}
for (k = 0; k <= j; k++)
{
new_dog->owner[k] = owner[k];
}
new_dog->age = age;
return new_dog;
}
