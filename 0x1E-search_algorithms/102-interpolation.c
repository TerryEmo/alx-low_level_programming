#include "search_algos.h"

/**
  * interpolation_search - searches for the value in a sorted array 
  * integers using interpolation search
  * @array: pointer to the first element of the array to search
  * @size: number of elements in the array
  * @value: value to search for
  * Return: If value is not present or array is NULL, -1
  * Otherwise, first index where the value is located
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform interpolation search */
	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
