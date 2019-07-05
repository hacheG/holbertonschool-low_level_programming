#include "holberton.h"

/**
* *leet - encodes a string into 1337
* @a: string
* Return: string
**/

char *leet(char *a)
{
	int i, j;

	char s[] = "a4e3o0t7l1";

	i = 0;
	j = 0;

	while (a[i] != '\0')
	{
		for (j = 0; j < 10; j += 2)
		{
			if (a[i] == s[j] || a[i] == s[j] - 32)
			{
				a[i] = s[j + 1];
				break;
			}
		}
		i++;
	}
	return (a);
}
