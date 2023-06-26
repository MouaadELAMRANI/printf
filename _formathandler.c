#include "main.h"

/**
 * _formathandler - handles format
 * @format: format to handle
 * @vals: list of values
 * Return: size
 */
int _formathandler(const char *format, va_list vals)
{
	int size, i;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			switch(str[i+1])
			{
				case 's':
					//to do
					break;
				case 'c':
					//to do
					break;
			}
		}
	}
}
