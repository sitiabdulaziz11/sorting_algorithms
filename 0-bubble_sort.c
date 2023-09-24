#include "sort.h"

/**
 * bubble_sort - Function that sort with bubble sort algorithm.
 * @array: array of list
 * @size: size
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, flag;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
