#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: its d
 * @name: name of dog.
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: always 0
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
