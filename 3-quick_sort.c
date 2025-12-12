#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* swap - échange deux entiers
* @a: premier entier
* @b: second entier
*/
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
/**
* quick_sort - trie un tableau d'entiers avec quick sort (Lomuto)
* @array: tableau à trier
* @size: taille du tableau
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}

/**
* quick_sort_recursive - fonction récursive de quick sort
* @array: tableau à trier
* @low: index de début
* @high: index de fin
* @size: taille du tableau (pour affichage)
*/
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high, size);

		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}
/**
* lomuto_partition - partitionne le tableau selon Lomuto
* @array: tableau à partitionner
* @low: index de début
* @high: index de fin
* @size: taille du tableau (pour affichage)
* Return: index final du pivot
*/
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];

	int i = low - 1;

	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);

	return (i + 1);
}
