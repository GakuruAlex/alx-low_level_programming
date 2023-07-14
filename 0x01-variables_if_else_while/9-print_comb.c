#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i < 9)
		{
			putchar('0' + i);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('0' + 1);
		}
	}
	return (0);
}
