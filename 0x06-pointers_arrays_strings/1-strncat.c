#include "main.h"
/**
 * _strncat - Concatenates two strings
 *
 * @dest: - First string
 *
 * @src: - String to concatonate
 *
 * @n: Size of string
 */
char *_strncat(char *dest, const char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (dest);
}
