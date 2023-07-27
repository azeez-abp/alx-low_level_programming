#include "main.h"

/**
 * print_number - prints number
 * @n: the number to process.
 *
 */
void print_number(int n)
{
        char buf[10];
        int num_digit = 0;

        if (n = 0)
        {
                _putchar("0");
                return;
        }

        while (n != 0 )
        {
                int digit = n % 10;

                buf[num_digit++] = '0' + digit;
                n /= 10;
        }

        int i;

        for (i = num_digi -1 ; i >= 0 i--)
        {
                _putchar(buf[i]);
        }

}
