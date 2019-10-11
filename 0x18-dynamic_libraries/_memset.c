#include "holberton.h"

/**
 *_memset - fills memory with constant byte
 *@s: memory area
 *@n: number of bytes to be filled
 *@b: constant that fills the memory
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int m;

  for (m = 0; m < n; m++)
    {
      s[m] = b;
    }
  return (s);
}
