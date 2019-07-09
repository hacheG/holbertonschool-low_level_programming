#include "holberton.h"

/**
 * _strspn - lenght of a prefix
 * @s: array
 * @accept: number to accept
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lenght = 0;

	for (lenght = 0; *s != '\0' && *accept != '\0'; s++, accept++)
		if (*s == *accept)
			lenght++;
		else
			break;

	return (lenght);
}
