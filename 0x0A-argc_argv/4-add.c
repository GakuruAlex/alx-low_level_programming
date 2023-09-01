#include "main.h"
/**
 * main -adds positive numbers
 * @argc: number of arguments
 * @argv: argument list
 * Return: 1 for error otherwise 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, elem, j;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	for (i = 1; i < argc; i++)
	{
		elem = atoi(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (!isdigit((unsigned char)argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
		}
		sum += elem;
		
	}
	printf("%d\n", sum);
	return (0);
}
