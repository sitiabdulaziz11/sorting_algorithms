#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence.
 *
 * @array: array
 * @size: size pf array.
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, rg = 1;
	int tmp;

	while (rg < size / 3)
	{
		rg = rg * 3 + 1;
	}

	while (rg > 0)
	{
		for (i = rg; i < size; i++)
		{
			tmp = array[i];

			for (j = i; j >= rg && array[j - rg] > tmp; j -= rg)
			{
				array[j] = array[j - rg];
			}
			array[j] = tmp;
		}
		print_array(array, size);
		rg = (rg - 1) / 3;
	}
}
