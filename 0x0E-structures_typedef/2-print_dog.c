#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *print_dog - prints a struct dog
 *@d:structure to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{

	}
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
