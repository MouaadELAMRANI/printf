#include "main.h"

/**
 * _formathandler - handles format
 * @format: format to handle
 * @vals: list of values
 * Return: size
 */
int _formathandler(const char *format, va_list vals)
{
	int size, i, valsize;

	size = 0;
	for (i = 0; i < _strlen(format); i++)
	{
		size += 1;
		if (format[i] == '%')
		{
			switch(format[i+1])
			{
				case 's':
					valsize = print_s(vals);
					size += valsize;
					i++;
					break;
				case 'c':
					break;
			}
		}
		else
		{
			_putchar(format[i]);  
		}
	}
	_putchar(-1);

	return size;
}
