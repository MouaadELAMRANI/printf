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

	va_start(args, format);

	size = _formathandler(format, args);

	va_end(args);

	return (size);
}
