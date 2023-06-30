#ifndef MAIN_H
#define MAIN_H

/** Standard libraries **/
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct format - check specifier and link to corent print function
 * @specifier: letter to check
 * @print: function to print
 */
typedef struct format
{
	char *specifier;
	int (*print)(va_list);
} format_t;

/****** Prototypes ******/
int _putchar(int c);
int (*get_func(const char *definer))(va_list);
int _printf(const char *format, ...);

/** print_functions **/
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_lower_x(va_list args);
int print_upper_X(va_list args);
int print_String(va_list args);

/** helper_functions **/
int print_number(unsigned int n);
int count_length(unsigned int n);
int get_binary_len(unsigned int dec);
int prnt_binary(unsigned int n);
int prnt_octal(unsigned int n);
int count_octal_length(unsigned int n);
void prnt_hex_low(unsigned int n, int *len);
void prnt_hex_up(unsigned int n, int *len);
void puts_str(char *str);

/****** END prototypes *****/
#endif
