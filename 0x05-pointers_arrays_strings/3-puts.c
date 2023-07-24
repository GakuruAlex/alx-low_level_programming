#include<stdio.h>
#include "main.h"
/**
 * _puts - Prints a string
 *
 * @str: - String to be outputed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c",*str);
		str++;
	}
	printf('\n');
}
