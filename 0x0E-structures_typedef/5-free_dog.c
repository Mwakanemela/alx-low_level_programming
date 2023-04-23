#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_dog - free dog
  * @d: The dog freed
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
