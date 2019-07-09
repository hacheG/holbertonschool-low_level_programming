#include "holberton.h"

/**
 * _strspn - gets the length of a prefix
 * @s: string
 * @accept: substring
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int con1;
	unsigned int con2;

	for (con1 = 0; s[con1]; con1++)
	{
		if (len != con1)
		{
			break;
		}
		for (con2 = 0; accept[con2]; con2++)
		{
			if (s[len] == accept[con2])
			{
				len++;
			}
		}
	}

	return (len);
}
