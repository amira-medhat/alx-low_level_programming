#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s = 0, e = 8;
	int i;

	while (s <= e)
	{
		for (i = s + 1; i <= 9; i++)
		{
			putchar(s + '0');
			putchar(i + '0');
			if (s != 8 || i != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
		s++;
	}
	putchar('\n');

	return (0);

}
