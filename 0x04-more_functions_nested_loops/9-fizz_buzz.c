#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 *Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			if (x <= 100)
				printf("Buzz ");
			else
				printf("%d ", x);
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	return (0);
}
