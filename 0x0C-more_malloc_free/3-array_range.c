#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
	int *q;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;
	q = malloc(sizeof(*q) * (size + 1));

	if (q == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++, min++)
	{
		q[i] = min;
	}
	return (q);
}
