#include "main.h"
/**
 * _puts - output str 
 * Description: using write function in unistd.h
 * write(1,&var,sizeof(var)) 1 is tsdout 
 * 0 is stdin
 * 2 is stderr
 * @str: the value to process to the stdout.
 */
void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
