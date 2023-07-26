#include "main.h"
/**
 * _strcat - Appends the src string to the dest string
 *
 * @dest: - Destination string
 *
 * @src: - Source string
 *
 * Return: -ALways a string
 */
char *_strcat(char *dest, const char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';

	return (original_dest);
}
