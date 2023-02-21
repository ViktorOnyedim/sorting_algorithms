#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sort an array of integers in ascending order using bubblesort
 * @array: array of integers
 * @size: Number of elements in @array
 *
 * Return: Nothing.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;

				/* print the array after the swap */
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
