#include "holberton.h"
/**
 * _memcpy - Makes the sum of two numbers
 * @dest: First operand
 * @src: Second operand
 * @n: Second operand
 *
 * Return: The sum of the two parameters
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (*dest);

}
