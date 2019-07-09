#include "holberton.h"
/**
* _memcpy - entry point
* Description: num of bytes from a src - dest
* @src: cp from
* @n: c-bytes
* @dest: cp to
* Return: Pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	*(dest + num) =  *(src + num);

	return (dest);
}
