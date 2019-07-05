#include "holberton.h"
/**
 * _strcat - Check if a number is greater than 0
 * @dest: The number to be checked
 * @src: The number to be checked
 * Return: concate strings
 */
char *_strcat(char *dest, char *src)
{
	int a, b, i, j;
	int coun = 0;
	int coun2 = 0;

	for (a = 0; dest[a] != 0; a++)
	{
		coun = coun + 1;
	}

	for (b = 0; src[b] != 0; b++)
	{
		coun2 = coun2 + 1;
	}

	for (i = coun, j = 0; j < coun2; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
