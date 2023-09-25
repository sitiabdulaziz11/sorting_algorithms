#include "sort.h"

/**
 * partition -  function that sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 *
 * @array: array
 * @lb: lower bound.
 * @up: upper bound.
 * Return: val
 */
int partition(int *array, int lb, int ub)
{
	int ptr, temp, start;
	int k, pvt;

	start = lb - 1;
	pvt = array[ub];

	for (k = lb; k <= ub - 1; k++)
	{
		if (array[k] <= pvt)
		{
			start++;
			temp = array[start];
			array[start] = array[k];
			array[k] = temp;
			print_array(array, ub);
		}
	}
		ptr = array[start + 1];
		array[start + 1] = array[ub];
		array[ub] = ptr;
		print_array(array, ub);
		return (start + 1);
}
/**
 * quick_sort -  function that sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 *
 * @array: array
 * @size: size of array.
 */
void quick_sort(int *array, size_t size)
{
	int lb = 0;
	int ub = size - 1;
	int val;

	if (!array || !size)
		return;
	
	if (lb < ub)
	{
		val = partition(array, lb, ub);
		quick_sort(array, val);
		quick_sort(array + val + 1, size - val - 1);
	}
}
