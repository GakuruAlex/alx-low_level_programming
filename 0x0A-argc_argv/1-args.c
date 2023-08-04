#include<stdio.h>
/**
 * main - Prints the number of arguments passed into it
 *
 * @argc: Number of arguments
 *
 * @argv: Array of passed arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
