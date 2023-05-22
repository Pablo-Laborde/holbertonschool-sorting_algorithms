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
	size_t i, j, pivot = max;

  i = 0;
  while (array[i] < array[pivot])
    i++;
  j = i + 1;
  while (j < pivot)
  {
    if (array[j] < array[pivot])
    {
      swap(array, i, j);
      i++;
    }
    j++;
  }
}

/**
 * swap- swaps two values
 * @array: array
 * @x: var
 * @y: var2
 * Return: void
*/
void swap(int *array, size_t x, size_t y)
{
	int a;
  
  a = array[x];
  array[x] = array[y];
  array[y] = a;
}
