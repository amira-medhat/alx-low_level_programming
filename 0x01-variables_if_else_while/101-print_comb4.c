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
	int i, j;

	while (s <= e)
	{
		for (i = s + 1; i <= 9; i++)
		{
			for (j = i + 1; j <= 9; j++)
			{
			putchar(s + '0');
			putchar(i + '0');
			putchar(j + '0');
			if ((s != 7 || i != 8) || j != 9)
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
		s++;
	}
	putchar('\n');

	return (0);

}
