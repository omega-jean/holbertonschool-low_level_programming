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
if (new_dog->name == NULL
}
