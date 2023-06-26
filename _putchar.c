#include "main.h"

/**
 * _putchar - prints char to stdout
 * @c: char
 */
void _putchar(char c)
{
	static char buffering[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffering, i);
		i = 0;
	}

	if (c != -1)
	{
		buffering[i++] = c;
	}		
}
