#include "holberton.h"
/**
 * puts2 - prints every other char from a string
 * @str: input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
		if (c % 2 == 0)
			_putchar(str[c]);
	_putchar('\n');
}
