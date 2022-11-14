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
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		printf("Age: %f\n", d->age);
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
