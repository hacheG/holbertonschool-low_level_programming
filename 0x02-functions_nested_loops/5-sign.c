#include "holberton.h"

/**
 * print_sign - This is a description
 * @n: The number to be checked
 * Return: The sum of the two parameters
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
