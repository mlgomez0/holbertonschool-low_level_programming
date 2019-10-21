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
	int i = 0, j = 0, m, k;

	if (name == NULL || owner == NULL)
		return (NULL);
	str = malloc(sizeof(dog_t));
	if (str == NULL)
		return (NULL);
	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	str->name = malloc((i + 1) * sizeof(char));
	if (str->name == NULL)
	{
		free(str);
		return (NULL);
	}
	str->age = age;
	str->owner = malloc((j + 1) * sizeof(char));
	if (str->owner == NULL)
	{
		free(str->name);
		free(str);
		return (NULL);
	}
	for (m = 0; m <= i; m++)
	{
		str->name[m] = name[m];
	}
	for (k = 0; k <= j; k++)
	{
		str->owner[k] = owner[k];
	}
	return (str);
}
