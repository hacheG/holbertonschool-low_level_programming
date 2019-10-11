#include "holberton.h"

/**
 *_strstr - locates a substring
 *@haystack: string
 *@needle: substring
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
  int s;

  for (; *haystack; haystack++)
    {
      for (s = 0; needle[s]; s++)
	{
	  if (needle[s] != haystack[s])
	    break;
	}
      if (!needle[s])
	return (haystack);
    }
  return (0);
}
