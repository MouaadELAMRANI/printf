#include "main.h"

/*
 * print - print a character
 * @str: string
 * Return: return to the length of a str
 */

int print(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * _strlen - the length of a str
 * @str: string
 * Return: return to the length
 **/

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++);

	return (i);
}

