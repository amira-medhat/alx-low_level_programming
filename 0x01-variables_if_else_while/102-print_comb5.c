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
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 8; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				for (int q = 0; q <= 9; q++)
				{
				putchar(i + '0');
				putchar(j + '0');
				putchar(' ');
				putchar(k + '0');
				putchar(q + '0');
				if (!((i == 9 && j == 8) && (k == 9 && q == 9)))
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
		putchar(' ');
	}

	putchar('\n');

	return (0);

}
