#include "main.h"

/**
 * alloc_grid - function that returns pointer
 * to 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: returns pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int h, w;
	int **row;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	row = (int **)malloc(height * sizeof(int));

	if (row == NULL)
	{
		return (NULL);
	}

	for (w = 0; w < width; w++)
	{
		row[w] = (int **)malloc(width * sizeof(int));
		if (row[w] == NULL)
		{
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			row[h][w] = 0;
		}
	}

	return (row);
}
