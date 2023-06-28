#include "main.h"

/**
 * print_binary - prints numbers in binary
 * @args: va_list inclusive of the number to print
 * Return: length of printed character
 */
int print_binary(va_list args)
{
	unsigned int decimal = va_arg(args, unsigned int);
	int length = 0;

	get_binary(decimal);
	return (length);
}

/**
 * get_binary - prints binary from decimal
 * @dec: number param to convert
 */
void get_binary(unsigned int dec)
{
	if (dec > 1)
		get_binary(dec / 2);
	_putchar('0' + dec % 2);
}
