#include "holberton.h"

/**
 * *_memcpy - copies memory area
 * @dest: pointer to memory
 * @src: pointer to memory that will be copy
 * @n: bytes to copy
 * Return: dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (dest);
}
