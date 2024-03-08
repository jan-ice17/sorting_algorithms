#include "sort.h"

/**
 * heap_sort - sorts an array 
 * @array: array
 * @size: size 
 */
void heap_sort(int *array, size_t size)
{
	int i;
	int tmp;

	if (size < 2)
		return;

	for (i = size / 2 - 1; i >= 0; i--)
		heapi_fy(array, size, (size_t)i, size);

	for (i = size - 1; i >= 0; i--)
	{
		tmp = array[i];
		array[i] = array[0];
		array[0] = tmp;
		if (i != 0)
			print_array(array, size);
		heapi_fy(array, (size_t)i, 0, size);
	}
}

/**
 * heapi_fy - changed an array  into a heap tree
 * @array: array 
 * @s: size subtree
 * @root: index of the subtree 
 * @size: size of entire array
 */
void heapi_fy(int *array, size_t s, size_t root, size_t size)
{
	size_t max, left, right;
	int tmp;

	max = root;
	left = (root * 2) + 1;
	right = (root * 2) + 2;

	if (left < s && array[left] > array[max])
		max = left;

	if (right < s && array[right] > array[max])
		max = right;

	if (max != root)
	{
		tmp = array[root];
		array[root] = array[max];
		array[max] = tmp;
		print_array(array, size);
		heapi_fy(array, s, max, size);
	}
}