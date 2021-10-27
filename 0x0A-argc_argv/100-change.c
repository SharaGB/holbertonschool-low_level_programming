#include "main.h"
/**
 * main - The minimum number of coins
 * @argc: Check arguments
 * @argv: Check arrau arguments
 * Return: 1 if error, else 0.
 */
int main(int argc, char **argv)
{
	int i, pesos, count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	pesos = atoi(argv[1]);
	if (pesos < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 0; i < 5;)
		{
			if (pesos >= coins[i])
			{
				pesos -= coins[i];
				count += 1;
			}
			if (pesos < coins[i])
				i++;
		}
	}
	printf("%d\n", count);
	return (0);
}
