#include "holberton.h"

/**
 *_strchr - locates a charecter in a string
 *@s: string
 *@c: character
 *Return: s
 */
char *_strchr(char *s, char c)
{
  int l;

  for (l = 0; s[l] != '\0'; l++)
    {
      if (s[l] == c)
	break;
    }
  if (s[l] == c)
    return (s + l);
  return (0);
}
