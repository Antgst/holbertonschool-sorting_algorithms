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
 * partition_lomuto - partitions array using the Lomuto scheme
 * @array: array to partition
 * @low: start index
 * @high: end index (pivot position)
 * @total_size: full size of the array (for print_array)
 *
 * Return: final index of the pivot
 */
int partition_lomuto(int *array, int low, int high, size_t total_size)
{
	int pivot, i, j, temp;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;

			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, total_size);
			}
		}
	}

	/* place pivot at correct position */
	if (array[i + 1] != array[high])
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, total_size);
	}

	return (i + 1);
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
