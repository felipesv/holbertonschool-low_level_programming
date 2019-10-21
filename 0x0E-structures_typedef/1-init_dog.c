#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - nitialize a variable of type struct dog
 * @d: structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: 0 success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
