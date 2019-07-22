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
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Name: %f\n", d->age);
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
		printf("Name: %s\n", d->owner);
	}
	else
	{
		printf("Name: %s\n", d->owner);
	}
}
