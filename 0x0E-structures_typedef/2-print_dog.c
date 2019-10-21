#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - prints a struct dog
 * @d: structure
 *
 * Return: 0 success
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");

		if ((*d).age != 0)
			printf("Age: %f\n", (*d).age);
		else
			printf("Age: (nil)\n");

		if ((*d).owner != NULL)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");
	}
}
