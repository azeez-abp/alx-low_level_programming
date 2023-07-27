#include <stdio.h>
#include "main.h"
/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: A pointer to the result (r) if it can be stored in the buffer,
 *         otherwise returns 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum = 0;
	int i = 0, j = 0, k = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= size_r || j >= size_r)
		return (0);
	i--;
	j--;
	r[size_r - 1] = '\0';
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += (n1[i] - '0');
		if (j >= 0)
			sum += (n2[j] - '0');
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		k++;
		i--;
		j--;
	}
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
