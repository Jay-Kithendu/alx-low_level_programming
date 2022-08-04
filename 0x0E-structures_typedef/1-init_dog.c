#include "dog.h"

/**
  * init_dog - initializes struct dog
  * @d:...
  * @name: name of dog
  * @age: age
  * @owner: owner name
  *
  * Return: Always 0
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
