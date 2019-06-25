#include "holberton.h"

/**
 * _isalpha - This is a description
 * @c: The number to be checked
 * Return: The sum of the two parameters
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
