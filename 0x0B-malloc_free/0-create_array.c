#include<stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array nad fills it with given character
 * @size: -Size of array
 *
 * @c: - Character to be filled
 *
 *Return: - A pointer to the address of the first character
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
