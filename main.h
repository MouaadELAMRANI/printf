#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _strlen(const char *str);
int print(char *str);
int print_s(va_list vals);
void _putchar(char c);
int _formathandler(const char *format, va_list vals);
#endif
