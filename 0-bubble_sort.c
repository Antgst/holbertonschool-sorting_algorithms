#include "sort.h"

/**
 * bubble_sort - Sort and array of integers in ascending order using the Bubble sort algorithm
 * @array: The array that have to be sorted
 * @size: Number of elements in the array
 * 
 * Return: The array is sorted
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;
	int swp;

	if (array == NULL && size < 2)
		return;
	
	swp = 1;

	while (swp)
	{
		swp = 0;

		for (i = 0; i < size -1; i++)
		{
			if (array[i] > array [i + 1])
			{
				tmp = array [i];
				array [i] = array [i + 1];
				array [i + 1] = tmp;

				print_array(array, size);
				swp = 1;
			}
		}
	}
}
