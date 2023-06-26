#include "main.h"

/*
 * print - print a character
 * @str: string
 * Return: return to the length of a str
 */

int print(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	return (x);
}

/**
 * _strlen - the length of a str
 * @str: string
 * Return: return to the length
 **/

int _strlen(const char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
		;
	return (x);
}

