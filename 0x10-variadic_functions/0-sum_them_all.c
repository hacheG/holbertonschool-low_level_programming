#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: number of arguements
 * Return: sum of all parameters or 0
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list all_sum;
	int total = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(all_sum, n);

	for (i = 0; i < n; i++)
		total = total + va_arg(all_sum, unsigned int);

	va_end(all_sum);
	return (total);

}
