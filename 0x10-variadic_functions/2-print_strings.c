#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints numbers separated by char
 * @separator: the char.
 * @n: number of passed argumanets.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, flag = 0;
	va_list list;
	char *empty = "(nil)";
	char *str = NULL;

	if (separator == NULL)
		flag = 1;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		printf("%s", str? str : empty);
		if (flag == 0 && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
