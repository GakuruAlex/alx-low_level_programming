#include "main.h"
/**
 * _calloc - Allocates memory for an array
 *
 * @nmemb: Size of array
 *
 * @size: Size of each array element
 *
 * Return: If function fails ) else Apointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
