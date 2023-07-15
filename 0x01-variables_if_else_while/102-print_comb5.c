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
	int i, j, k, q;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 9)
			{
				q = 0;
				k = 1;
			}
			else
			{
			q = j + 1;
			k = i;
			}
			while (k <= 9)
			{
				while (q <= 9)
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
				else
					break;
				if  (q == 9)
				{
					q = 0;
					break;
				}
				q++;
				}
				k++;
				if (((i == 9 && j == 8) && (k == 9 && q == 9)))
					break;
			}
			if (((i == 9 && j == 8) && (k == 9 && q == 9)))
				break;
		}
		putchar(' ');
	}


	return (0);

}
