#include<stdarg.h>
/**
 * sum_them_all - Sum all parameters
 *
 * @n: - Number of arguments
 *
 * Return: Sum of arguments or 0 for n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

        int sum = 0;
	
	va_start(args, n);
	
	if (n == 0)
	{
		return (0);
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return sum;
	}
}
