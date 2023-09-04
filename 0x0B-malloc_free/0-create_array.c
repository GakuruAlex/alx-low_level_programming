#include "main.h"
/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 *
 * @unsigned int size: Size of array
 * @c: specified char
 * Return: Null if size = 0 or if it fails ele pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
       	unsigned int i = 0;

	ptr = (char *)malloc(sizeof(char) * size);
	
	if (size == 0)
	{
		return (NULL);
	}
	else if (ptr)
	{
		while (i < size)
		{
			*(ptr + i) = c;
			i++;
		}
		return (ptr);

	}
	else
	{
		return (NULL);
	}
	free(ptr);	
}
