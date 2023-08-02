#include "main.h"
#include <string.h>
/**
 * palindrome_worker - check is palindrom
 * @s:string input
 * @i: the beging of string
 * @j: the end of sting - null
 * Return: 1 is palindrome, 0 is not palindrome
 */
int palindrome_worker(char *s, int i, int j)
{
	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);

	palindrome_worker(s, i + 1, j - 1);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string input
 * Return: 1 is palindrome, 0 is not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j  = strlen(s);

	if (palindrome_worker(s, i, j) == 1)
		return (1);
	else
		return (0);
}
