#include "holberton.h"
/**
 *_strcat - concatenate two strings
 *@dest: string 1
 *@src: string 2
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
  int destlen, srclen;

  for (destlen = 0; dest[destlen] != '\0'; destlen++)
    ;
  for (srclen = 0; src[srclen] != '\0'; srclen++, destlen++)
    {
      dest[destlen] = src[srclen];
    }
  dest[destlen] = '\0';
  return (dest);
}
