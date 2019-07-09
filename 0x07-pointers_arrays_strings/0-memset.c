#include "holberton.h"
/**
* _memset - entry point
* Description: sets the memory of the bytes.
* @b: n-val.
* @s: f-byte.
* @n: c-bytes.
* Return: Pointer s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem;

	for (mem = 1; mem <= n; mem++)
		*(s + (mem - 1)) = b;
	return (s);
}
