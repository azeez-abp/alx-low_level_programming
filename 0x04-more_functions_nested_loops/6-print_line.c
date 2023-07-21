#include "main.h"

/**
 * print_line - Print lines.
 * @n: Number of times to print '_'.
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int times;

	for (times = 0; times < n; times++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

