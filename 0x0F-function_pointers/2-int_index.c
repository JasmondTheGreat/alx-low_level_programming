/**
 * int_index - searches for an integer
 *
 * @array: array to search within
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the 1st element for which the cmp fn does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (array[i]);
	}

	return (-1);
}
