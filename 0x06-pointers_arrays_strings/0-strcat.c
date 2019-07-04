#include "holberton.h"
#include <string.h>
/**
 * _strcat - Check if a number is greater than 0
 * @dest: The number to be checked
 * @src: The number to be checked
 * Return: 1 if the number is positive. 0 otherwise
 */
char *_strcat(char *dest, char *src)
{
int a, b, i, j;

	a = strlen(dest);
	b = strlen(src);

	for (i = b, j = 0; j < b; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
