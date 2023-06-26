#include "main.h"

/**
 * __strlen - the length of a str
 * @str: string
 * Return: return to the length
 **/

int __strlen(const char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
		;
	return (x);
}

