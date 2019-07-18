#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *_calloc - allocate memory for an array usingmalloc
 * @nmemb: number ofelements
 * @size: size of bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *q;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	q = malloc(nmemb * size);

	if (q == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		q[i]  = 0;
	}
	return (q);
}
