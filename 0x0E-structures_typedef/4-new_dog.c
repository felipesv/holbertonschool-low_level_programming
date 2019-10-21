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
	int ln_name, ln_owner, cnt1 = 0, cnt2 = 0;
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

	while (cnt1 <= ln_name)
	{
		(*nw_dog).name[cnt1] = name[cnt1];
		cnt1++;
	}

	(*nw_dog).owner = malloc(sizeof(char) * ln_owner);
	(*nw_dog).age = age;

	if ((*nw_dog).owner == NULL)
	{
		free((*nw_dog).name);
		free(nw_dog);
		return (NULL);
	}

	while (cnt2 <= ln_name)
	{
		(*nw_dog).owner[cnt2] = name[cnt2];
		cnt2++;
	}
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
