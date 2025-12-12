#include "sort.h"

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

    for (i = 0; i < size; i++)
    {
        low = i;

        for (j = i + 1; j < size - 1; j++)
        {
            if (array[j] < array [low])
            
            low = j;
        }
        
        if (low != i)
        {
            tmp = array [i];
            array [i] = array [low];
            array[low] = tmp;

            print_array(array, size);
        }
    }
}
