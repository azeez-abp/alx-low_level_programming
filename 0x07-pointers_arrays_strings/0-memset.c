/**
 * _memset - assgin constant value for the first 
 * n byte of s 
 * @s: pointer to buffer
 * @b: char to be added to the location
 * @n: int is the size of the buffer
 * Return: pointer to the
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[n] = b;
	}

	return (s);
}
