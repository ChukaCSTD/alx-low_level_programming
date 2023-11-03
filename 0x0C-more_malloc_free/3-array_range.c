#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *point;
	int i, j = 0;

	if (min > max)
		return (NULL);
	point = malloc(sizeof(*point) * ((max - min) + 1));
	if (point != NULL)
	{
		for (i = min; i <= max; i++)
		{
			point[j] = i;
			j++;
		}
		return (point);
	}
	else
		return (NULL);

}
