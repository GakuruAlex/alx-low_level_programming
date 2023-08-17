#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - Prints numbers followed by a new line
 *
 * @separator: - String to be printed between numbers
 *
 * @n: - number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
		unsigned int i;
		int element;

		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			element = va_arg(args, int);
			printf("%d", element);
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(args);
}
