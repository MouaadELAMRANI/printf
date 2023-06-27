#include"main.h"

/**
 * convert - convert integer into string
 * @num: integer number
 * @base: input base
 * Return: return to char
 */
char *convert(long int num, int base)
{
	static char *arr = "0123456789abcdef", buff[50];
	char *pointer, sign = 0;
	unsigned long i = num;

	if (num < 0)
	{
		i = -num;
		sign = '-';
	}

	pointer = &buff[49];
	*pointer = '\0';

	do {
		*--pointer = arr[i % base];
		i /= base;
	} while (i != 0);
	
	if (sign)
		*--pointer = sign;

	return (pointer);
}
