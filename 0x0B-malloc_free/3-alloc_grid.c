#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: first dimention.
 * @height: second dimention.
 * Return: pointer to pointer.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
