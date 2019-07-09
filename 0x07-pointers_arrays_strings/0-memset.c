#include "holberton.h"
/**
 * _memset - Makes the sum of two numbers
 * @s: First operand
 * @b: Second operand
 * @n: Second operand
 *
 * Return: The sum of the two parameters */

char *_memset(char *s, char b, unsigned int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (b);
}
