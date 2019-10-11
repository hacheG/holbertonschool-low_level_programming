#include "holberton.h"

/**
 *_strpbrk - function that searches for a string for any of a set of bytes
 *@s: string
 *@accept: string
 *Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
  int h, x;

  for (h = 0; s[h] != '\0'; h++)
    {
      for (x = 0; accept[x] != '\0'; x++)
	{
	  if (s[h] == accept[x])
	    {
	      break;
	    }
	}
      if (s[h] == accept[x])
	return (s + h);
    }
  return (0);
}
