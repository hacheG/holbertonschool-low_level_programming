#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - returns integer values from string
 * @s: input string
 *
 * Return: will return integer
 */
int _atoi(char *s)
{
	int result = 0, sign = 0, c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '-')
			sign++;
		if (s[c] > 47 && s[c] < 58)
		{
			while (s[c] > 47 && s[c] < 58)
				result = result * 10 - (s[c++] - 48);
			break;
		}
	}
	return (result *= sign % 2 == 0 ? -1 : 1);
}
