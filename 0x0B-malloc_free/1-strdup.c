#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{
	char *r;
	int i, j;
	int coun = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		coun = coun + 1;
	}

	r = malloc(sizeof(char) * coun);

	if (r == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0' ; j++)
	{
		r[j] = str[j];
	}
	return (r);
}
