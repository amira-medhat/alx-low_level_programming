#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function to print names
 * @name: string represents the name.
 * @f: pointer to another function to add specific theme on the name.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
