#include "sort.h"

/**
 * selection_sort- Sorts an array using selection sort.
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int a;

	if (size > 1)
		for (i = 0; i < (size - 1); i++)
		{
			k = i;
			for (j = (i + 1); j < size; j++)
				if (array[j] < array[k])
					k = j;
			if (k != i)
			{
				a = array[i];
				array[i] = array[k];
				array[k] = a;
				print_array(array, size);
			}
		}
}
