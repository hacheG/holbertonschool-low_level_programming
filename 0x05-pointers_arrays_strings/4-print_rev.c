#include "holberton.h"
/**
 * print_rev - Check if a number is greater than 0
 * @s: The number to be checked
 */
void print_rev(char *s)
{
	int i;
	int coun = 0;

	for (i = 0; *s != '\0'; i++)
	{
		coun = coun + 1;
		s++;
	}
	for (i = coun; i >= 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
