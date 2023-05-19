#include "sort.h"
/**
 * quick_sort- sorts
 * @size: size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (size > 2)
		sort_rev(array, size, 0, (size - 1));
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
	int a;
	size_t x, i, j;

	if (min != max)
	{
		i = min;
		j = max;
		while (i != j)
		{
			if (array[j] >= array[i])
				if (j > i)
					j--;
				else
					j++;
			else
			{
				a = array[j];
				array[j] = array[i];
				array[i] = a;
				x = j;
				j = i;
				i = x;
				print_array(array, size);
			}
		}
		if (i > min)
			sort_rev(array, size, min, (i - 1));
		if (i < max)
			sort_rev(array, size, (i + 1), max);
	}
}
