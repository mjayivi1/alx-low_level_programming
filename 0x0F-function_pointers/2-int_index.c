#include "function_pointers.h"

/**
  * int_index - index of int
  * @array: array
  * @size: array size
  * @cmp: pointer to function
  *
  * Return: -1 if no element matches
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
