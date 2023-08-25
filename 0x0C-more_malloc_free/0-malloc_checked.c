#include "main.h"
/**
 *malloc_checked - Allocate memory
 *
 * @b: Number to be allocted
 *
 * Return: - A pointer to allocated memory
 */void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
