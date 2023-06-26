#include "main.h"

/**
 * print_c - print a character
 * @vals: list
 * Return: return to 1
 */
int print_c(va_list vals)
{
	int val;

	val = va_arg(vals, int);
	_putchar(val);

	return (1);
}
