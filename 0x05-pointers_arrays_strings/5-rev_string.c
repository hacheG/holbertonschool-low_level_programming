#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0, c, temp;

	while (s[length + 1] != 0)
		length++;
	for (c = 0; c <= length / 2; c++)
	{
		temp = s[c], s[c] = s[length - c];
		s[length - c] = temp;
	}
}
