#include<stdio.h>
#include<string.h>
/**
 * puts2: - Prits every other character of a string ,starting with first character
 * @str: - Input string
 */
void puts2(char *str)
{
	int i, length;

	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
