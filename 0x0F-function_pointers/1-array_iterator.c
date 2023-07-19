#include "function_pointers.h"
/**
 * array_iterator - ex fun on arr elemnt
 * @array: arr
 * @size: size
 * @action:func to excu
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
