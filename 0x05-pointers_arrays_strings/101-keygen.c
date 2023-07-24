#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Generates a random password.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$^&*()@#$%^&";
	int len = 0;
	srand(time(NULL));
	int rands_loop = 33;
	char password[33]; /* Allocate space for 10 characters plus the null terminator */

	while (len < rands_loop)
	{
		int rands = (rand() % strlen(alpha)); /* Corrected the range for rands */
		password[len] = alpha[rands];
		len++;
	}

	password[len] = '\0'; /* Add the null terminator to make it a valid C string */

	printf(" %s\n", password);

	return (0);
}
