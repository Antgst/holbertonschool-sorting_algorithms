#include "sort.h"

/**
 * lomuto_partition - Partitions an array of integers
 * using the lomuto partition scheme
 * @array: array of integers to be sorted
 * @size: the size of the array
 * @low: starting the index of the partition range
 * @high: ending index of the partition range (pivot index)
 * 
 * Description: Uses the last element as pivot and rearranges the array
 * so that elements less than the pivot are on the left, and elements
 * greater than or equal to the pivot are on the right. The array is
 * printed after each time two different elements are swapped.
 *
 * Return: the final index of the pivot
 */

static int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j;
	int tmp;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using quick sort algorithm
 * @array: array of integers to be sorted
 * @size: the size of the array
 * 
 * Return: the array is sorted
 */

void quick_sort(int *array, size_t size)
{

}
