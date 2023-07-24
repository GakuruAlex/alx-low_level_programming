#include "main.h"
/**
 * _strlen - Return the lenght of a string
 *
 * @s: string to get length of
 *
 * Return: Always the length of passed string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
