#ifndef dog_h
#define dog_h

/**
 * struct dog - structure dog with the following elements
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
