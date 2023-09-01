#include "main.h"
/**
 * main - orints all arguments it receives
 *
 * @argc: number of arguments
 *
 * @argv: arguments
 *
 * Return: Alaways 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
