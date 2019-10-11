#include "holberton.h"

/**
 *_strcmp - compare two strings
 *@s1: string 1
 *@s2: string 2
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
  int compare, res;

  compare = 0;
  while (s1[compare] != '\0' && s2[compare] != '\0')
    {
      res = (s1[compare] - s2[compare]);
      if (res != 0)
	break;
      compare++;
    }
  return (res);
}
