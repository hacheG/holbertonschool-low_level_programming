#include "holberton.h"

/**
 * print_last_digit - This is a description
 * @c: The number to be checked
 * Return: The sum of the two parameters
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c * (-1);
	}
	c = c % 10;
	_putchar (c + '0');
	return (c);
}
