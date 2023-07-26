/**
 * rot13  - Encodes a string using rot13
 *
 * @input: - String to encode
 *
 * Return: Always a string
 */
char *rot13(char *input)
{
	char *ptr = input;

	while (*ptr)
	{
		char c = *ptr;

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			char base = (c >= 'a') ? 'a' : 'A';
			*ptr = (c - base + 13) % 26 + base;
		}
		ptr++;
	}
	return input;
}
