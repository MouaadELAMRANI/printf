#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");

	_printf("Test:[%s]\n", "string 1", "string 2");
/*	_printf("Test:[%s]\n", -1); */
	_printf("Test:[%s]\n", "a");
	_printf("Test:[%s]\n");
/*	_printf("Test:[%s]\n", 1); */
	_printf("last char is percent Test:%"); /*unhandled*/
	printf("1\n");
	_printf("");
	printf("2\n");
	_printf("", "Arg");
	printf("3\n");

	return (0);
}
