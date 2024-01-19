#include "search_algos.h"

/**
 * binary_search - implements binary search algo
 * @array: pointer to the first element
 * @size: size of the array
 * @value: value searched for
 * Return: returns index of value or -1 if array null or value not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, low, mid, high;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return mid;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	printf("Found %d at index: -1\n", value);
	return (-1);
}
