#include "sort.h"

static int lomuto_partition(int *array, size_t size, int low, int high);
static void quick_sort_recursive(int *array, size_t size, int low, int high);

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * (Lomuto partition scheme, pivot is always the last element).
 * @array: Pointer to the array to sort
 * @size: Number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_recursive(array, size, 0, (int)size - 1);
}

/**
 * lomuto_partition - Partitions an array using the Lomuto scheme
 * (pivot is always the last element of the partition).
 * @array: Pointer to the array
 * @size: Total size of the array (for print_array)
 * @low: Starting index of the partition
 * @high: Ending index of the partition (pivot index)
 *
 * Return: The final index of the pivot
 */
static int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot, i, j, tmp;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
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

/**
 * quick_sort_recursive - Recursively sorts partitions of the array
 * @array: Pointer to the array
 * @size: Total size of the array (for print_array)
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 */
static void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, size, low, high);
		quick_sort_recursive(array, size, low, pivot_index - 1);
		quick_sort_recursive(array, size, pivot_index + 1, high);
	}
}
