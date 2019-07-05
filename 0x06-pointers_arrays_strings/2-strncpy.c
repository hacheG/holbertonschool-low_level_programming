#include "holberton.h"
/**
* _strncpy - copy front
* @dest: destiny
* @src: to copy
* @n: number to remplace
* Return: copy
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
