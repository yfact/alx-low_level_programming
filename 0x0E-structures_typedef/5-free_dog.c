#include "main.h"
#include <stdio.h>

/**
 * free_dog - function to release dogs
 * @d: pointer to struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
