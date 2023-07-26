#include <stdio.h>
#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 *
 * @str: - String to capitalize
 *
 * Return: Always a string
 */
char *cap_string(char *str)
{
	int capitakize_next = 1;

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			capitalize_next = 1;
		}
		else
		{
			if (capitalize_next)
			{
				str[i] = toupper(str[i]);
				capitalize_next = 0;
			}
		}

	}
}
