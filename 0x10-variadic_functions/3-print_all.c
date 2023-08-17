#include<stdio.h>
#include<string.h>
#include<stdarg.h>
/**
 * print_all - Prints anything
 *
 * @format: - list of types of arguments passed to function
 *
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	int char_count = 0;
	int separator_needed = 0;

	va_list args;

	va_start(args, format);
 	while ((c = format[char_count]) != '\0')
	{
	switch (c)
	{
 		case 'c':
			i = va_arg(args, int);
 			printf("%c", i);
			separator_needed = 1;
 			break;
 		case 'i':
		if (separator_needed)
		{
			printf(", ");
 			separator_needed = 0;
 		}
		i = va_arg(args, int);
		printf("%d", i);
 		separator_needed = 1;
		break;
 		case 'f':
		if (separator_needed)
		{
			printf(", ");
 			separator_needed = 0;
                }
		f = va_arg(args, double); 
 		printf("%f", f);
		separator_needed = 1;
		break;
		case 's':
		if (separator_needed)
		{
			printf(", ");
			separator_needed = 0;
		}
		s = va_arg(args, char *);
		if (s == NULL) {
			printf("(nil)");
                }
		else 
		{
			printf("%s", s);
                }
		separator_needed = 1;
		break;
	}
		char_count++;
	}


	printf("\n");
	va_end(args);
}


