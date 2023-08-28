#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers separated by char
 * @separator: the char.
 * @n: number of passed argumanets.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, flag = 0;
	va_list list;

	if (separator == NULL)
		flag = 1;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (flag == 0 && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
