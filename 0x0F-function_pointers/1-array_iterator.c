#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter.
 * @array: array to work on
 * @size: size of array
 * @action: function to pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != 0 && size >= 1 && action != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
