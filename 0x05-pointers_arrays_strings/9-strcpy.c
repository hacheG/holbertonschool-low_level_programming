#include "holberton.h"
/**
 * _strcpy - copies a string
 * @dest: source to copy string to
 * @src: string to copy
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != 0; c++)
		dest[c] = src[c];
	dest[c] = 0;
	return (dest);
}
