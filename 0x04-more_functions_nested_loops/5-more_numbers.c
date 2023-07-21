#include "main.h"
/**
 * more_numbers - prints 1-14 10 times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
        int limit = 10;
        int num;

	for (limit = 1; limit <= 10; limit++)
        {
                for (num = 0; num <= 14; num++)
                {
                        int tens, ones;

                        tens = num / 10;
                        ones = num % 10;

                        if (tens != 0)
                                _putchar(tens + '0');

                        _putchar(ones + '0');
                }
                _putchar('\n');
        }
}
