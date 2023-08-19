#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @a: first parm.
 * @b: second parm.
 * Return: the result.
 */

int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - subtract two numbers
 * @a: first parm.
 * @b: second parm.
 * Return: the result.
 */
int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * op_mul - multiply two numbers
 * @a: first parm.
 * @b: second parm.
 * Return: the result.
 */
int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - devide two numbers
 * @a: first parm.
 * @b: second parm.
 * Return: the result.
 */

int op_div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}

/**
 * op_mod - modulas two numbers
 * @a: first parm.
 * @b: second parm.
 * Return: the result.
 */

int op_mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}

