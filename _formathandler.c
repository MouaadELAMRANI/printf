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

	size = _strlen(format);
	for (i = 0; format[i] < size; i++)
	{
		if (format[i] == '%')
		{
			switch(format[i+1])
			{
				case 's':
					valsize = print_s(vals);
					size += valsize;
					break;
				case 'c':
					valsize 
					break;
			}
		}
	}
	return size;
}
