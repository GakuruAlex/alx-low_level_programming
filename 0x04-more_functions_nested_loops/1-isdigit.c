#include<stdio.h>
#include<stdlib.h>
/**
 * _isdigit - Check whether given input is a digit between 0 and 9 inclusive
 *
 * @c: -Digit to check
 *
 * Return: 1 if c is a digit
 *	0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
