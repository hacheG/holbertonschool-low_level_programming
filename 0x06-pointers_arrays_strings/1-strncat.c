#include "holberton.h"

/**
* _strncat - concat with a character
* @dest: dest
* @src: to concate
* @n: num to characters
* Return: concat string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
