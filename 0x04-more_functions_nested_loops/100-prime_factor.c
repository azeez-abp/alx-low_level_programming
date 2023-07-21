#include <stdio.h>
/**
 * main - find the largest prime factor
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor
 */
int main(int n)
{
        int i;
	int larg = 0;

	if (n <= 1)
	{
		return (0);
	}

	
	for (int i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			if (i > larg)
			{
				larg = i;
			}
			n /= i;
		}
	}
	printf("%d\n", larg);
	return (1);
}
