#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of arguements
 * Return: nothing, prints number if separator is not NULL
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printed;
	unsigned int i;

	va_start(printed, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printed, int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(printed);
	printf("\n");
}
