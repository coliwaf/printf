#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list of character to print
 *
 * Return: number of bytes printed
 */
int print_char(va_list args)
{
	int chr = va_arg(args, int);
	unsigned int len = 0;

	_putchar(chr);

	len++;
	return (len);
}
