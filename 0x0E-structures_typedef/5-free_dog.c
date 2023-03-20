#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory of structs dogs.
 * @d: pointer of structs
 *
 * Return: on success 1.
 * On error: -1 is returned, and errno is set appropriately.
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
