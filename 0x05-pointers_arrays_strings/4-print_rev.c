#include "holberton.h"
/**
 * print_rev - prints string, from pointer to string, in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
