#include "holberton.h"
/**
 * _isdigit - Check if a number is greater than 0
 * @c: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
