#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *print_dog - function that prints a struct dog
  *struct dog - struct function
  *@d: pointer to the struct
  *Return: nothing
  */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
