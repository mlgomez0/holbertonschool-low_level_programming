#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - creates a new structure
 *@name: pointer to name
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: a pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{


	dog_t *str;

	str = malloc(sizeof(dog_t));
	if (str == NULL)
		return (NULL);
	str -> name = name;
	str -> age = age;
	str -> owner = owner;
	return (str);
}
