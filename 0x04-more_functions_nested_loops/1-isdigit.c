#include "main.h"

/**
 * _isdigit - is testing digit
 * @c:int
 * Description: none
 * Return: 1 pr 0
 */

int _isdigit(int c)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (c == digit)
		{
			return (1);
		}
	}
	return (0);
}
