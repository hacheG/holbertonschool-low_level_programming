#include "holberton.h"
/**
 * rot13 - encoding string into rot13 format
 * @s: char passed for conversion
 * Return: char
 */
char *rot13(char *s)
{
	int j;
	int i = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return ((char *)s);
}
