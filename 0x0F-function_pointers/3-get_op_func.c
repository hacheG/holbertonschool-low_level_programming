#include "3-calc.h"
#include <stdlib.h>

/**
* get_op_func - selects the correct function to perform requested operator
* @s: requested operator
* Return: pointer to requested operator function
**/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
