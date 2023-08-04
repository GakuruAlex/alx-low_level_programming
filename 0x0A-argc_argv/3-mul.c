#include<stdio.h>
#include<stdlib.h>
/**
 * main - Prints the product of two integers
 *
 * @argc: Number of passed arguments
 *
 * @argv: - Arguments array
 *
 * Return: 0 Success or 1 Failure
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc > 1)
	{
	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", product);

	return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
