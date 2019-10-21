#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic data of dogs
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
int lengthArray(char *array);
void free_dog(dog_t *d);

#endif /* DOG_H */
