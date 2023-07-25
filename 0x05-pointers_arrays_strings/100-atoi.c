#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Extracts an integer from a string.
 * @s: The string to extract from.
 *
 * Return: The extracted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = -sign;

		if (*s >= '0' && *s <= '9')
		{
			int max = INT_MAX - (*s - '0');
			int max_int = (int) (max / 10);

			if (result > max_int)
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}

			result = (result * 10) + (*s - '0');
		}
		s++;
	}

	return (result * sign);
}
