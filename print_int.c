#include "main.h"

/**
 * print_int - print an integer in base 10
 * @vals: list of number to print
 * Return: return to the length of the numbers
 */
int print_int(va_list vals)
{
	char *ptr;
	int length;

	ptr = convert(va_arg(vals, int), 10);

	length = print((ptr != NULL) ? ptr : "NULL");

	return (length);
}
