#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to set
 * @to: where to set it to
 * Return: none
 */

void set_string(char **s, char *to)
{
	*s = to;
}
