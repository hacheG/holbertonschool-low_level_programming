#include "holberton.h"
#include <stdlib.h>
/**
 * _strpbrk - search character in a string
 * @s: string to search
 * @accept: string to find
 * Return: pointer to char finded
 */

char *_strpbrk(char *s, char *accept)
{
	char *_accept = accept;

	while (*s != '\0')
	{
		accept = _accept;
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}
