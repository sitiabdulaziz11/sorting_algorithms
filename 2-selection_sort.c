#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 *
 * @array: array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t k, f, min;
	int tem;

	for (k = 0; k < size - 1; k++)
	{
		min = k;
		for (f = k + 1; f < size; f++)
		{
			if (array[f] < array[min])
				min = f;
		}
		if (min != k)
		{
			tem = array[min];
			array[min] = array[k];
			array[k] = tem;
			print_array(array, size);
		}
	}
}
