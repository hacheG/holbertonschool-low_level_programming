#include "holberton.h"

/**
 **_strcpy - copies string into another pointer
 *@dest: pointer
 *@src: pointer
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
  int e;

  e = 0;
  while (src[e] != '\0')
    {
      dest[e] = src[e];
      e++;
    }
  dest[e] = '\0';
  return (dest);

}
