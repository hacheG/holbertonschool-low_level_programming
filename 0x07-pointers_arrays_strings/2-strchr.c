#include "holberton.h"
/**
 **_strchr - entry point
 * Description: locates a character in a string
 *@s: pointer with string
 *@c: char
 *Return: s
 */
char *_strchr(char *s, char c)
{
	int lchar;

	for (lchar = 0; s[0] != '\0'; lchar++)
	{
		if (s[0] == c)
		{
			return (s);
		}
		s++;
	}
	if (s[0] == c)
	{
		return (s);
	}
	return ('\0');
}
