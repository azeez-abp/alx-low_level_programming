#include <stdio.h>

/**
 * biggest - print biggest factor
 * @n:int
 * Rerun: void
 */

void biggest(long int n)
{
	int i,larg;
	 if (n <= 1)
        {
        }


        for (i = 2; i <= n; i++)
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
}

/**
 * main - find the largest prime factor 
 * Return: Always zero 
 */
int  main(void)
{

	 biggest(612852475143);
	 return (0);
}
