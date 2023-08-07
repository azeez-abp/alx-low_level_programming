#include "main.h"

/**
 * strtoe - split string into two word
 * @str: string
 * Return: pointer to pointer of the string
 */
char **strtow(char *str);
{
	int i;

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		char *each_word;
		each_word  = (char *)malloc((i + 1)* sizeof(char *));

		if (str[i] != ' ')
		{


}
