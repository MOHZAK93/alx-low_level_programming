#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *new_dog - function to create new dog
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *
  *Return: pointer to the new dog struct
  */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, new_name, new_owner;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL || !name || !owner)
	{
		free(new_dog);
		return (NULL);
	}
	for (new_name = 0; name[new_name] != '\0'; new_name++)
		;
	for (new_owner = 0; owner[new_owner] != '\0'; new_owner++)
		;

	new_dog->name = malloc(new_name + 1);
	new_dog->owner = malloc(new_owner + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < new_name; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	new_dog->age = age;
	for (j = 0; j < new_owner; j++, i++)
		new_dog->owner[i] = owner[j];
	new_dog->owner[i] = '\0';
	return (new_dog);
}
