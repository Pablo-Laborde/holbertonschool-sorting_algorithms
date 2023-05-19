#include "sort.h"

/**
 * bubble_sort- sorts
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, max, aux;
	int flag;

	max = size - 1;
	if (array)
		do {
			flag = 0;
			for (i = 0; i < max; i++)
			{
				if (array[i] > array[i + 1])
				{
					aux = array[i];
					array[i] = array[i + 1];
					array[i + 1] = aux;
					flag = 1;
					print_array(array, size);
				}
			}
			max--;
		} while (flag);
}
