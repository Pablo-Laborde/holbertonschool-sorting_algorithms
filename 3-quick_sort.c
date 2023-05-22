#include "sort.h"

/**
 * quick_sort- sorts
 * @array: array
 * @size: size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (size > 1)
		sort_rev(array, size, 0, size - 1);
}

/**
 * sort_rev- sorts
 * @array: array
 * @size: size
 * @min: min
 * @max: max
 * Return: void
 */
void sort_rev(int *array, size_t size, size_t min, size_t max)
{
	size_t mov = min, pivot = max;

	if (min < max)
	{
		while (mov != pivot)
		{
			if (array[mov] < array[pivot])
				swap(array, &mov, &pivot);
			if (mov < pivot)
				mov++;
			else
				mov--;
		}
		sort_rev(array, size, 0, pivot - 1);
		sort_rev(array, size, pivot + 1, max);
	}
}

/**
 * swap- swaps two values
 * @array: array
 * @mov: var
 * @pivot: var2
 * Return: void
*/
void swap(int *array, size_t *mov, size_t *pivot)
{
	int a;
	size_t b;

	if (mov != pivot)
	{
		a = array[*mov];
		array[*mov] = array[*pivot];
		array[*pivot] = a;
		b = *mov;
		*pivot = *mov;
		*mov = b;
	}
}
