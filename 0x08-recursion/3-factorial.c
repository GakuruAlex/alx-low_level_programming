#include "main.h"
/**
 * factorial - retuns factorial of given number
 *
 *@n: -Number
 *
 * Return: factorial of number or -1 for error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
