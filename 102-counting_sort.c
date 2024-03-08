#include "sort.h"

/**
 * counting_sort - sorts an array with the Counting sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void counting_sort(int *array, size_t size)
{
	int *count_array, *outer_arr, maxi, num, j, l;
	size_t i, k, m, n;

	if (size < 2)
		return;

	maxi = array[0];
	for (i = 1; i < size; i++)
		if (array[i] > maxi)
			maxi = array[i];

	count_array = malloc(sizeof(size_t) * (maxi + 1));
	outer_arr = malloc(sizeof(int) * size);

	for (j = 0; j <= maxi; j++)
		count_array[j] = 0;
	for (k = 0; k < size; k++)
	{
		num = array[k];
		count_array[num] += 1;
	}
	for (l = 1; l <= maxi; l++)
		count_array[l] += count_array[l - 1];
	print_array(count_array, maxi + 1);
	for (m = 0; m < size; m++)
	{
		outer_arr[count_array[array[m]] - 1] = array[m];
		count_array[array[m]]--;
	}
	for (n = 0; n < size; n++)
		array[n] = outer_arr[n];

	free(count_array);
	free(outer_arr);
}