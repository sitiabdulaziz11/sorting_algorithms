#include "sort.h"

/**
 * quick_sort -  function that sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 *
 * @array: array
 * @size: size of array.
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_func(array, 0, size - 1);
}
/**
 * quick_sort_func - helper function.
 * @low: lower
 * @array: array
 * @high: high
 */
void quick_sort_func(int *array, int low, int high)
{
	int val;

	if (low < high)
	{
		val = partition(array, low, high);
		quick_sort_func(array, low, val - 1);
		quick_sort_func(array, val + 1, high);
	}
}
/**
 * partition - divid array.
 * @low: low
 * @high: high
 * @array: array
 *
 * Return: value
 */
int partition(int *array, int low, int high)
{
	int i = low - 1, pvt = array[high], j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pvt)
		{
			i++;
			_swap(&array[i], &array[j]);
			print_array(array, high);
		}
	}
	_swap(&array[i + 1], &array[high]);
	print_array(array, high);
	return (i + 1);
}
/**
 * _swap - swap function.
 * @a: first
 * @b: second
 */
void _swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
