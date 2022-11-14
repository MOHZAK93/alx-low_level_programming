#ifndef dog_h
#define dog_h
/**
  *struct dog - struct for a dog
  *@name: name of dog
  *@age: age of dog
  *@owner: owner of dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
