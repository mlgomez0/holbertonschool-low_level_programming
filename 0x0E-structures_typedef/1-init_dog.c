#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - Initialize a variable type structure dog
 *@d: pointer to structure
 *@name: name of the dog
 *@age: age of the dog
 *@owner: Owner of the dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
