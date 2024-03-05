#include "sort.h"

/**
 * selection_sort - sorts an array following the selection sort algorithm
 * @array: array to sort
 * @size: size of the array;
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, mini;

	register int tmp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		mini = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[mini])
				mini = j;
		}
		tmp = array[i];
		array[i] = array[mini];
		array[mini] = tmp;
		if (i != mini)
			print_array(array, size);
	}
}