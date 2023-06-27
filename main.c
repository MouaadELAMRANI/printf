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
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
       	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");

	_printf("_Test:[%s]\n", "string 1", "string 2");
	printf("Test:[%s]\n", "string 1", "string 2");
/*	_printf("_Test:[%s]\n", -1); */
/*	printf("Test:[%s]\n", -1); */ /* segmentation fault on both _printf and printf */
	printf("no args \n");
	_printf("_Test:[%s]\n");
	printf("nnnn \n");
	printf("Test:[%s]\n");
	printf("last \n");
	_printf("_last char is percent Test:%"); /*unhandled*/
	printf("last char is percent Test:%");

	return (0);
}
