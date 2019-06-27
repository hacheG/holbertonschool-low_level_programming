#include "holberton.h"
/**
 * _isupper - Check if a number is greater than 0
 * @c: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _isupper(int c)
{

	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
