#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - writes the character c to stdout
 * @size: The character to print
 * @c: The character to print
 * Return: pointer to array or null
 *
 */

char *create_array(unsigned int size, char c)
{
	char *q = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
		q = malloc(sizeof(char) * size);

		for (i = 0; i < size; i++)
		{
			q[i] = c;
		}

		return (q);

}
