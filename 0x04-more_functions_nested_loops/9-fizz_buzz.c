#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int start = 0;

	for (start = 1; start <= 100; start++)
	{
		if (start % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (start % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (start % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", start);
		}
	}

	return (0);
}

