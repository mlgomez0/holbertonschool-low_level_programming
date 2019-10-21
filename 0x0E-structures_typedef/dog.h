#ifndef DOG
#define DOG

/**
 *struct dog - information for dogs
 *@name: First member
 *@age: Second member
 *@owner: Third member
 *Description: structure to with dog information
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
