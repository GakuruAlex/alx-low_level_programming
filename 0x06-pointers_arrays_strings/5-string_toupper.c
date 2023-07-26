/**
 *string_toupper - Changes all lowercase letters of a string to uppercase
 *
 * @str: - String to uppercase
 *
 * Return: Always upcase string
 */
char *string_toupper(char *str)
{
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
