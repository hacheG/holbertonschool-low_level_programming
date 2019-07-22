#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints information about dog in new line format
 * @d: dog structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Name: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->owner);
		}
	}

}
