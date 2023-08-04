#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - Adds positive numbers
 *
 *@argc: Number of arguments
 *
 * @argv: Arguments passed
 *
 * Return: 0 if no number or 1 for Error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int num = atoi(argv[i]);

			if (num <= 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += num;

			}
		}
		printf("%d\n", sum);

	}
	return (0);
}
