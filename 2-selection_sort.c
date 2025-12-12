#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the selection sort algoritm
 * @array: the array to be sorted
 * @size: the number of elements in the array
 *
 * Return: The array is sorted
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
