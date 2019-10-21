#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int ln_name, ln_owner, cnt;
	dog_t *nw_dog;

	ln_name = lengthArray(name);
	ln_owner = lengthArray(owner);

	nw_dog = malloc(sizeof(dog_t));

	if (nw_dog == NULL)
		return (NULL);

	(*nw_dog).name = malloc(sizeof(char) * ln_name);

	if ((*nw_dog).name == NULL)
	{
		free(nw_dog);
		return (NULL);
	}

	(*nw_dog).owner = malloc(sizeof(char) * ln_owner);

	if ((*nw_dog).owner == NULL)
	{
		free((*nw_dog).name);
		free(nw_dog);
		return (NULL);
	}

	for (cnt = 0; cnt <= ln_name; cnt++)
		(*nw_dog).name[cnt] = name[cnt];

	(*nw_dog).age = age;

	for (cnt = 0; cnt <= ln_owner; cnt++)
		(*nw_dog).owner[cnt] = owner[cnt];

	return (nw_dog);
}
/**
 * lengthArray - length array
 * @array: array
 *
 * Return: return string cocatenated
 */
int lengthArray(char *array)
{
	int length = 0;

	while (array[length] != '\0')
	{
		length++;
	}

	return (length);
}
