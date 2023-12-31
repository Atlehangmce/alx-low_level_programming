#include <stdlib.h>
#include "dog.h"
/**
* free_dog - frees memory allocated for a struct dog
* @d: struct dog to free
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
			d->name = NULL;
		}
		if (d->owner != NULL)
		{
			free(d->owner);
			d->owner = NULL;
		}
		free(d);
	}
}
