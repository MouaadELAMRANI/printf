#include "main.h"

/**
 * print_s - print a string
 * @vals: list
 * Return: return to string length
 */

int print_s(va_list vals)
{
	int valsize;
	char *ptr;

	ptr = va_arg(vals, char*);
	valsize = print((ptr != NULL) ? ptr : "(null)");

	return (valsize);
}
