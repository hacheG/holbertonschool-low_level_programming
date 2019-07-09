#include "holberton.h"
/**
 3 3 * _memset - Makes the sum of two numbers
 4 4 * @s: First operand
 5 5 * @b: Second operand
 6 6 * @n: Second operand
 7 7 *
 8 8 * Return: The sum of the two parameters
 9 9 */

char *_memset(char *s, char b, unsigned int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (b);
}
