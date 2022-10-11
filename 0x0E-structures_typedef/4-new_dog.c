#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int d, o, g;
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (d = 0; name[d]; d++)
		;
	for (o = 0; owner[o]; o++)
		;
	p->name = malloc(d + 1);
	p->owner = malloc(o + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name), free(p->owner), free(p);
		return (NULL);
	}
	for (g = 0; g < d; g++)
	{
		p->name[g] = name[g];
	}
	p->name[g] = '\0';
	for (g = 0; g < o; g++)
	{
		p->owner[g] = owner[g];
	}
	p->owner[g] = '\0';
	p->age = age;
	return (p);
}
