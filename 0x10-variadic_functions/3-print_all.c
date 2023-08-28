#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints different types of variables
 * @format: the list of available variables to print.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	char *str = NULL;
	char *empty = "(nil)";
	int i = 0;
	int flag = 0;

	va_start(list, format);
	while (format[i])
	{
	flag = 0;
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(list, int));
		break;
	case 'i':
		printf("%d", va_arg(list, int));
		break;
	case 'f':
		printf("%f", va_arg(list, double));
		break;
	case 's':
		str = va_arg(list, char *);
		if (str == NULL)
		{
			printf("%s", empty);
			break;
		}
		printf("%s", str);
		break;
	default:
		flag = 1;
		break;
	}
	if (!(format[i + 1] == '\0') && !flag)
	printf(", ");
	i++;
	}
	printf("\n");
	va_end(list);
}
