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

/** helper_functions **/
int print_number(unsigned int n);
int count_length(unsigned int n);

/****** END prototypes *****/
#endif
