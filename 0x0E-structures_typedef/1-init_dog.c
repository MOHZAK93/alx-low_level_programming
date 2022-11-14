#include "dog.h"
#include <stdio.h>
/**
  *init_dog - function that initialize a variable
  *
  *@d: pointer to the struct
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *
  *Returna: nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
