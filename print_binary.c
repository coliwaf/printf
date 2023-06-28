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
	int result;

	if (decimal < 1)
	{
		_putchar(0 + '0');
		return (1);
	}

	result = prnt_binary(decimal);

	if (result == 1)
		length += get_binary_len(decimal);
	else
		length = -1;

	return (length);
}

/**
 * get_binary_len - prints binary from decimal
 * @dec: number param to convert
 */
int get_binary_len(unsigned int dec)
{
	unsigned int len;

	len = 0;

	for (; dec > 0; len++)
		dec /= 2;
	
	return (len);
}
