#include <stdio.h>
#include <string.h>
/**
 * print_rev - Prints a string in reverse
 * @s: - String to print
 */
void print_rev(char *s)
{
	int j;

	{
		for (j = strlen(s); j >= 0; j--)
		{
		if (s[j] != '\0')
			printf("%c\n", s[j]);
		}
	}
}
