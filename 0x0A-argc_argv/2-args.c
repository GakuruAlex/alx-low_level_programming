#include<stdio.h>
/**
 * main - Prints all arguments it receives
 *
 * @argc: -Number of arguments
 *
 * @argv: - Array of arguments
 *
 * Return: - Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i <= argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
