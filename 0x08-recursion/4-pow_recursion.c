#include "main.h"
/**
 * _pow_recursion -function that returns the value of x raised to power of y.
 *
 * @y: number
 *
 * @x: power
 *
 * Return: - -1 if y < 0 else the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
