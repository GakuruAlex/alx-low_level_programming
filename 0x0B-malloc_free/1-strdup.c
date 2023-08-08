#include<stdlib.h>
#include <stdio.h>
#include<string.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,which contains a copy of the string given.
 *
 * @str: - Parameter
 *
 * Return: - A pointer
 */
char *_strdup(char *str)
{
	int length;

	char *new_string;

	length = strlen(str) + 1;

	if (str == NULL)
	{
		return (NULL);
	}
	new_string = (char *)malloc(length * sizeof(char));

	if (new_string)
	{
		strcpy(new_string, str);

		return (new_string);
	}
	else
	{
		return (NULL);
	}
	free(new_string);
}
