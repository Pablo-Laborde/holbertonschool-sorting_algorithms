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
	size_t i = min, j = min, pivot = max;

	if (min < max)
	{
		while (j < pivot)
		{
			if (array[j] <= array[pivot])
			{
				swap(&array[i], &array[j]);
				i++;
				print_array(array, size);
			}
			j++;	
		}
		swap(&array[i], &array[pivot]);
		sort_rev(array, size, 0, pivot - 1);
		sort_rev(array, size, pivot + 1, max);
	}
}

/**
 * swap- swaps two values
 * @x: var
 * @y: var2
 * Return: void
*/
void swap(int *x, int *y)
{
	int a;

	if (x != y)
	{
		a = *x;
		*x = *y;
		*y = a;
	}
}
