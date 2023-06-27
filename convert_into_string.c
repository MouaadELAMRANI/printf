#include"main.h"

/**
 * conv_into_str - convert integer into string
 * @num: integer number
 * @base: input base
 * @lowcase: hexa to lowercase
 * Return: return to char
 */
char *conv_into_str(unsigned long int num, int base, int lowcase)
{
	static char *array;
	static char buff[50];
	char *pointer;

	array = (lowcase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	pointer = &buff[49];
	*pointer = '\0';
	do {
		*--pointer = array[num % base];
		num /= base;
	} while (num != 0);

	return (pointer);
}
