#include "holberton.h"
#include <stdlib.h>

/**
 * _strchr - search a char in a string
 * @s: pointer to string
 * @c: char to search
 * Return: Pointer to first find
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
