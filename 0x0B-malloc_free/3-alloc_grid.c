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
	int h, w, i;
	int **row;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	row = (int **)malloc(height * sizeof(int *));

	if (row == NULL)
	{
		return (NULL);
		free(row);
	}


	for (h = 0; h < height; h++)
	{
		row[h] = (int *)malloc(width * sizeof(int));
		if (row[h] == NULL)
		{
			for (i = 0; i < h; i++)
			{
				free(row[i]);
			}
			free(row);
			return(NULL);
		}
		for (w = 0; w < width; w++)
		{
			row[h][w] = 0;
		}
	}

	return (row);
}
