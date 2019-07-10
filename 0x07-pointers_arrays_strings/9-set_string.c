#include <stdio.h>
/**
 * set_string - sets the value of a pointer to char
 * @s: pointer to char
 * @to: char to set pointer to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
