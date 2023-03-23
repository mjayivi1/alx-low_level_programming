#include "function_pointers.h"

/**
  * array_iterator - iterate through the array
  * @array: the array 
  * @size: array size
  * @action: action to be done
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
