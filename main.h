#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _strlen(const char *str);
int print(char *str);
int print_s(va_list vals);
void _putchar(char c);
int _formathandler(const char *format, va_list vals);
char *conv_into_str(unsigned long int num, int base, int lowcase);

int print_c(va_list vals);
#endif
