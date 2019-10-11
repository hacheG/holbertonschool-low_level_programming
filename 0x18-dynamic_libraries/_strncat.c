#include "holberton.h"
/**
 *_strncat - concatenate two strings
 *@dest: string 1
 *@src: string 2
 *@n: number of bytes
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
  int destlen, srclen;

  for (destlen = 0; dest[destlen] != '\0'; destlen++)
    ;
  for (srclen = 0; src[srclen] != '\0' && n > 0; srclen++, destlen++, n--)
    {
      dest[destlen] = src[srclen];
    }
  return (dest);
}
