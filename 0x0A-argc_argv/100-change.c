#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum numbe rof coins
 * to make change for an amount of money.
 * @argc: argc
 * @argv: argv
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, lcoins = 0, money = atoi(argv[1]);
		int coins[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= coins[i])
			{
				lcoins += money / coins[i];
				money = money % coins[i];
				if (money % coins[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lcoins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
