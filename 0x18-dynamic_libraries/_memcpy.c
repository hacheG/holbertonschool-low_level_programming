#include "holberton.h"

/**
 *_memcpy - copies memory area
 *@dest: copied memory
 *@src: memory source
 *@n: number of bytes to be copied
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int m;

  for (m = 0; m < n; m++)
    {
      dest[m] = src[m];
    }
  return (dest);
}
