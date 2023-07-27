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
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
