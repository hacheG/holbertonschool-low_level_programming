#include "holberton.h"
#include <stdlib.h>

/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack
 * @haystack: string to search
 * @needle: string to find
 * Return: pointer to the beginning of the located substring
 */


char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		haystack = beginning + 1;
	}
	return (NULL);
}
