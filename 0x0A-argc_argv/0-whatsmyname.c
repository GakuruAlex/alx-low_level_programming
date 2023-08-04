#include <stdio.h>
/**
 * main - Prints the programs name
 *
 * @argc: - Size of argv
 *
 * @argv: - command line argument(s)
 *
 * Return: - Always (0) Success
 */
int main(int argc, char *argv[])
{
	printf("The size of argc[] is %d\n", argc);
	printf("%s\n", argv[0]);

	return (0);
}
