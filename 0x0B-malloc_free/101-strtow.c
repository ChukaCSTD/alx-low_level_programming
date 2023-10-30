#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - Main Entry
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - Main Entry
 * @str: input
 * Return: 0
 */
char **strtow(char *str)
{
	char **bat;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	bat = malloc((height + 1) * sizeof(char *));
	if (bat == NULL || height == 0)
	{
		free(bat);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				bat[i] = malloc((c - a1 + 2) * sizeof(char));
				if (bat[i] == NULL)
				{
					ch_free_grid(bat, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			bat[i][j] = str[a1];
		bat[i][j] = '\0';
	}
	bat[i] = NULL;
	return (bat);
}
