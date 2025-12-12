#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

static int lomuto_partition(int *array, size_t size, int low, int high);
static void quick_sort_recursive(int *array, size_t size, int low, int high);

/**
 * lomuto_partition - Partitions an array of integers
 * using the lomuto partition scheme
 * 
 * quick_sort - Sorts an array of integers in ascending order
 * using the quick sort algorithm
 * 
 * quick_sort_recursive - recursively sorts arrays
 * using the quick sort algorithm
 * 
 * @array: Pointer to the array of integers to sort
 * @size: number of elements in the array
 * @low: index of the first element of the partition range
 * @high: ending index of the partition range (pivot index)
 * 
 * Return: the final index of the pivot
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, size, 0, (int)size - 1);
}

static int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot;
	int i;
	int j;
	int tmp;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i < j)
			{
				tmp = array[i];
				array[i] = array [j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}

	if (i != high)
	{
		tmp = array[i];
		array[i] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}

	return (i);
}

static void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, size, low, high);
		quick_sort_recursive(array, size, low, pivot_index -1);
		quick_sort_recursive(array, size, pivot_index + 1, high);
	}
}
