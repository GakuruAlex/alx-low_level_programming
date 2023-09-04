#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
 * @str:string
 * Return: NULL if str is NULL or pointer to duplicate str.
 */
char *_strdup(char *str)
{	
	int length = 0, i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	ptr = (char *)malloc(length +1);
	if (ptr == NULL)
	{
		return NULL;
	}
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;

	}
	ptr[i] = '\0';

	return ptr;

}
