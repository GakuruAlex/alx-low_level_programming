#include<stdio.h>
#include<stdarg.h>
/**
 * print_strings - prints strings
 *
 * @separator: - String to be printed between the strings
 *
 * @n: - number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	const char *str = va_arg(args, const char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
}
	printf("\n");
	va_end(args);
}
