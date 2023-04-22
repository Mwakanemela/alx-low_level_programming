#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initialize a variable of struct
  * @d: pointer to dog struct
  * @name: name dog
  * @age: age dog
  * @owner: owner dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
