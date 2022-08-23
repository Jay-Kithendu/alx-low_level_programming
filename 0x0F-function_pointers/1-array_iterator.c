#include "function_pointers.h"

/**
  * array_iterator - function given as parametereach element an array
  * @array: array
  * @size: size of the array
  * @action: the action pointer
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
