#include "holberton.h"
/**
 * _strlen - Check if a number is greater than 0
 * @s: The number to be checked
 *
 * Return: The sum of the two parameters
 */

int _strlen(char *s)
{
	int i;
	int coun = 0;

	for (i = 0; *s != '\0'; i++)
	{
		coun = coun + 1;
		s++;
	}
	return (coun);

}
