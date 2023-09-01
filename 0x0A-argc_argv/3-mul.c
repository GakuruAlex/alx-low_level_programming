#include "main.h"
/**
 * main - multiplies two numbers
 *
 * @argc: numbr of arguments
 *
 * @argv: Argument list
 *
 * Return: 0 for success otherwise 1
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);

	return (0);
}
