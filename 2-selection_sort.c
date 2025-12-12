#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *                   using the Selection sort algorithm
 * @array: pointer to the array to sort
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t j;
	int tmp;

	size_t i = 0;
	size_t min_index;

	while (i < size - 1)
	{
		min_index = i;

		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min_index])
				min_index = j;
			j++;
		}

		if (min_index != i)
		{
			tmp = array[i];
			array[i] = array[min_index];
			array[min_index] = tmp;

			print_array(array, size);
		}

		i++;
	}
}
