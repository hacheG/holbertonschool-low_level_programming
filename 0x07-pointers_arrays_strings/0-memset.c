#include "holberton.h"

/**
 * _memset - assing memory
 * @s: buffer
 * @b: value to set
 * @n: n space to set
 * Return: change buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}

	return (s);
}
