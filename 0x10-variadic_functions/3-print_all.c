#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void op_char(char)
{
	printf("%c", va_arg(pseudo, char));
}

void po_int(int)
{
	printf("%d", va_arg(pseudo, int));
}

void op_float(float)
{
	printf("%f", va_arg(pseudo, float));
}

void op_string(char *)
{
	printf("%s", va_arg(pseudo, char *));
}

void print_all(const char * const format, ...)
{
	va_list pseudo;
	va_start(pseudo, format);

	op_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_string},
		{NULL, NULL}
	};
	int i;


	while()
	while()
		if()
		if()
		if()

	printf("\n");
}
