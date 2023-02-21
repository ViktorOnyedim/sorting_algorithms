#include "sort.h"

/**
 * selection_sort - Sort an array of integers using Selection sort
 * @array: Array to be sorted
 * @size: Number of elements in @array
 *
 * Return: Nothing.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	/* One by one move boundary of unsorted subarray */
	for (i = 0; i < size - 1; i++)
	{
		/* find the minimum element in unsorted array */
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;

		}
		/* swap the found minimum element with the first elements */
		temp = array[min];
		array[min] = array[i];
		array[i] = temp;

		/* print the array after each swap */
		print_array(array, size);
	}
}
