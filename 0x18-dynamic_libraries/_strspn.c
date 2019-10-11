#include "holberton.h"

/**
 *_strspn - lenght of a prefix substring
 *@s: string
 *@accept: bytes from s initial segment
 *Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
  int h, x, p;
  p = 0;

  for (h = 0; s[h] != '\0'; h++)
    {
      for (x = 0; accept[x] != '\0'; x++)
	{
	  if (s[h] == accept[x])
	    {
	      p++;
	      break;
	    }
	}
      if (s[h] != accept[x])
	break;
    }
  return (p);
}
