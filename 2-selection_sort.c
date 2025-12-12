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
	size_t i;
	size_t j;
	size_t low;
	int tmp;

	if (array != NULL)
		return;

		for (i = 0; i < size - 1; i++)
		{
			low = i;

			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[low])

				low = j;
			}

			if (low != 1)
			{
				tmp = array[i];
				array[i] = array[low];
				array[low] = tmp;

				print_array(array, size);
		}
	}
}
