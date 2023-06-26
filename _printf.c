#include "main.h"

/**
 * _printf - custom printf
 * @format: format stirng
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	size = _strlen(formation);

	va_start(args, format);

	handler(format, args);

	va_end(args);

	return (size);
}
