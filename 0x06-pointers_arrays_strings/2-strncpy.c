#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: - Destionation string
 *
 * @src: - String to be copied
 *
 * @n: - Size of string
 */
char *_strncpy(char *dest, const char *src, int n)
{
	char *original_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}
