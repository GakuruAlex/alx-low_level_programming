#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount of money
 *
 * @argc: - Number of arguments
 *
 * @argv: -Array of arguments
 *
 * Return: - 1 for error 0 for Success
 */
int main(int argc, char *argv[])
{
	int i, cents, num_coins, coin_count = 0;

	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	 num_coins = sizeof(coins) / sizeof(coins[0]);

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}
	printf("%d\n", coin_count);

	return (0);

}
