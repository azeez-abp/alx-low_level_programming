#include "main.h"
/**
 * _strstr - prints the consecutive caracters of s1 that are in s2.
 * @haystack: source string
 * @needle: searching string
 *
 * Return: new string
 */


char *_strstr(char *haystack, char *needle)
{
	unsigned int index_haystack = 0;
	unsigned int index_needle = 0;
	int found = 0;

	while (needle[index_needle])
	{
		found = 0;

		while (haystack[index_haystack])
		{
			if (needle[index_needle] == haystack[index_haystack] &&
				needle[index_needle] == haystack[index_needle])
			{
				found = 1;
				break;
			}
			else
			{
				index_haystack++;
			}
		}
		index_needle++;
	}

	if (found == 0)
		return (0);
	else
		return (needle);
}
