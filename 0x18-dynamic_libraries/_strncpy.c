#include "holberton.h"

/**
 **_strncpy - copies string
 *@dest: string 1
 *@src: string 2
 *@n: number of characters to be copied
 *Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
  int destlen;

  for (destlen = 0; destlen < n && src[destlen] != '\0'; destlen++)
    {
      dest[destlen] = src[destlen];
    }
  while (destlen < n)
    {
      dest[destlen] = '\0';
      destlen++;
    }
  return (dest);
}
