#include<stdlib.h>
#include<string.h>
/**
 * str_concat - Concatenates to strings
 *
 * @s1: - First string
 *
 * @s2: - Seconda string
 *
 * Return: - A concatenation of two strings
 */
char *str_concat(char *s1, char *s2)
{
	int length;

	char *concat_string;

	length = strlen(s1) + (strlen(s2) + 1);

	concat_string = malloc(sizeof(char) * length);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	strcpy(concat_string, s1);
	strcat(concat_string, s2);

	if (concat_string)
	{
		return (concat_string);
	}
	else
	{
		return (NULL);
	}
}
