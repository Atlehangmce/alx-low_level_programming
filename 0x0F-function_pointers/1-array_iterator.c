#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - to prints each array elem on a newl
* @array: an a array
* @size: how many elem to print
* @action: a pointer to print in regular or hex
* Return: the void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
