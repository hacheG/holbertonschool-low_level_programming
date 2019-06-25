#include "holberton.h"
/**
 * _abs - This is a description
 * @a: The number to be checked
 * Return: The sum of the two parameters
 */
int _abs(int  a)
{
	int r;

	if (a < 0)
	{
		r = a * (-1);

		return (r);
	}
	else
	{
		return (a);
	}
}
