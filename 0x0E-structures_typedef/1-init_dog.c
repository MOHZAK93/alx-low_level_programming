#include "dog.h"
#include <stdlib.h>

/**
  *init_dog - function that initialize a variable
  *
  *@d: name ofstruct
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *
  *Returna: nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
