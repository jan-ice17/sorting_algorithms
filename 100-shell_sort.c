#include "sort.h"

/**
* shell_sort - sorts an array of integers with Kth
* @array: array of integer
* @size: size of array
*
* Return: none
*/
void shell_sort(int *array, size_t size)
{
	size_t gaps = 0, j, i;
	int tmp;

	if (size < 2)
		return;

	while ((gaps = gaps * 3 + 1) < size)
		;

	gaps = (gaps - 1) / 3;

	for (; gaps > 0; gaps = (gaps - 1) / 3)
	{
		for (i = gaps; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= gaps && tmp <= array[j - gaps]; j -= gaps)
				array[j] = array[j - gaps];
			array[j] = tmp;
		}
		print_array(array, size);
	}
}