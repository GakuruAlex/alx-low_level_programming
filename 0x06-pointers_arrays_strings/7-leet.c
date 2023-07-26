/**
 * leet - Encodes a string int0 1337
 *
 * @str: - String to encode
 *
 * Return: Always a string
 */
char *leet(char *str)
{
	int i;

	char leet_map[128] = {0};

	leet_map['a'] = leet_map['A'] = '4';

	leet_map['e'] = leet_map['E'] = '3';

	leet_map['o'] = leet_map['O'] = '0';

	leet_map['t'] = leet_map['T'] = '7';

	leet_map['l'] = leet_map['L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (leet_map[str[i]])
		{
			str[i] = leet_map[str[i]];
		}
	}
	return (str);
}
