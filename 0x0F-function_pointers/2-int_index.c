#include "function_pointers.h"
/**
  * int_index - int index
  * @array: array
  * @size: size
  * @cmp: cmp
  * Return: return
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (index < size)
			{
				if (cmp(array[index]))
				{
					return (index);
				}
				index++;
			}
		}
	}
	return (-1);
}
